namespace Planner {

	public class TaskList : Gtk.Grid {

		private Gtk.Label title_list_label;
		private Gtk.Entry task_entry;
		private Gtk.Image avatar_image;
		private Gtk.Box box_title;
		private Gtk.Button add_button;		

		private Granite.Widgets.AlertView alert;

		private Gtk.Grid task_container;
		private Gtk.ScrolledWindow task_scrolled_window;

		private Services.Database db;

		private string TITLE_NEW_ALERT;
		private string DESCRIPTION_NEW_ALERT;

		private string TITLE_SELECT_ALERT;
		private string DESCRIPTION_SELECTED_ALERT;

		private Interfaces.List list_actual;

		public TaskList () {

			expand = true;
			orientation = Gtk.Orientation.VERTICAL;
            row_spacing = 12;
            margin = 50;
            margin_bottom = 50;
			width_request = 421;

			TITLE_NEW_ALERT = _("Create a List");
			DESCRIPTION_NEW_ALERT = _("To start creating <b>Tasks</b> you must create a first <b>List</b>");

			TITLE_SELECT_ALERT = _("Select a List");
			DESCRIPTION_SELECTED_ALERT = _("Select a <b>List</b> to start viewing and completing <b>Tasks</b>");

			list_actual = new Interfaces.List ();

			db = new Services.Database (true);
			
			build_ui ();
		}

		private void build_ui () {

			alert = new Granite.Widgets.AlertView ("", "", "dialog-warning");

			check_state_alert ();

			title_list_label = new Gtk.Label ("<b>"+ list_actual.name +"</b>");
			title_list_label.use_markup = true;
			title_list_label.halign = Gtk.Align.START;
			title_list_label.margin_left = 6;
			title_list_label.get_style_context ().add_class (Granite.STYLE_CLASS_H2_LABEL);

			add_button = new Gtk.Button.from_icon_name("list-add-symbolic", Gtk.IconSize.SMALL_TOOLBAR);
            add_button.tooltip_text = _("Create a new Milestone");
            add_button.halign = Gtk.Align.END;
			add_button.valign = Gtk.Align.CENTER;
			add_button.get_style_context ().add_class (Gtk.STYLE_CLASS_SUGGESTED_ACTION);
            add_button.clicked.connect ( () => {

            	box_title.visible = false;

            	task_entry.visible = true;
            	task_entry.grab_focus ();
            	task_entry.set_icon_from_icon_name (Gtk.EntryIconPosition.SECONDARY, "close-symbolic");

            });

			box_title = new Gtk.Box (Gtk.Orientation.HORIZONTAL, 6);
			box_title.no_show_all = true;
			box_title.hexpand = true;

			box_title.pack_start (title_list_label, false, false, 6);
			box_title.pack_end (add_button, false, false, 0);

			var separator = new Gtk.Separator (Gtk.Orientation.HORIZONTAL);

			var stackswitcher = new Granite.Widgets.ModeButton ();
			stackswitcher.margin_top = 12;
			stackswitcher.halign = Gtk.Align.CENTER;
			stackswitcher.width_request = 250;

			stackswitcher.append_text (_("Task"));
			stackswitcher.append_text (_("Completed"));
			stackswitcher.set_active (0);


			task_entry = new Gtk.Entry ();
			task_entry.set_icon_tooltip_text (Gtk.EntryIconPosition.SECONDARY, _("Add to list..."));
			task_entry.no_show_all = true;
			task_entry.max_length = 128;
			task_entry.margin_left = 12;		
			task_entry.placeholder_text = _("Add new task...");
			task_entry.get_style_context ().add_class (Gtk.STYLE_CLASS_FLAT);
			task_entry.get_style_context ().add_class (Granite.STYLE_CLASS_H3_LABEL);
			task_entry.no_show_all = true;
			task_entry.changed.connect( () => {

                if (task_entry.text == "") {

                    task_entry.set_icon_from_icon_name (Gtk.EntryIconPosition.SECONDARY, "close-symbolic");
                
                } else {

                    task_entry.set_icon_from_icon_name (Gtk.EntryIconPosition.SECONDARY, "list-add-symbolic");
                }

			});

			task_entry.activate.connect ( () => {

				add_task ();

			});	
			
			task_entry.icon_press.connect ((pos, event) => {
				
				if (pos == Gtk.EntryIconPosition.SECONDARY) {

					if (task_entry.secondary_icon_name == "close-symbolic") {

						task_entry.visible = false;
						box_title.visible = true;
						task_entry.text = "";

					} else {

						add_task ();
					}
				}
			});

			task_container = new Gtk.Grid ();
			task_container.orientation = Gtk.Orientation.VERTICAL;

			task_scrolled_window = new Gtk.ScrolledWindow (null, null);
            task_scrolled_window.expand = true;
            task_scrolled_window.margin_top = 12;
			task_scrolled_window.add (task_container);
			task_scrolled_window.no_show_all = true;
			
			add (alert);
			add (task_entry);
			add (box_title);
			add (task_scrolled_window);
			
			create_list (); 
		}

		private void create_list () {

			var all_task = new Gee.ArrayList<Interfaces.Task?> ();
			all_task = db.get_all_tasks (list_actual.id);

			foreach (var task in all_task) {

				var row = new TaskListRow (task);
				
				task_container.add (row);
				
				connect_row_signals (row);
			}

			show_all ();
		}

		private void update_list () {

			foreach (Gtk.Widget element in task_container.get_children ()) {
                
                task_container.remove (element);
			}
			
			create_list ();
		}
		
		private void connect_row_signals (TaskListRow row) {

			row.update_task.connect (update_task);
		
		}

		private void update_task (Interfaces.Task task) {
			
			db.update_task (task);
			
			update_list ();

			alert.visible = false;
		}

		private void add_task () {

			var task = new Interfaces.Task ();
	
            task.name = task_entry.text;
            task.state = "false";
            task.deadline = "";
            task.priority = "None";
            task.note = "";
            task.id_list = list_actual.id;

			db.add_task (task);

			task_entry.visible = false;
			box_title.visible = true;
			task_entry.text = "";

			update_list ();

			alert.visible = false;
		}

		public void set_list (Interfaces.List list) {

			if (list.name == "") {

				title_list_label.visible = false;
				box_title.visible = false;
				task_scrolled_window.visible = false;

				check_state_alert ();

				alert.visible = true;

			} else {

				list_actual = list;
				title_list_label.label = "<b>"+ list_actual.name +"</b>";
	
				title_list_label.no_show_all = false;
				box_title.no_show_all = false;
				task_scrolled_window.no_show_all = false;
	
				update_list ();
	
				alert.visible = false;
			
			}
		}

		private void check_state_alert () {
			
			if (db.get_list_length () < 1) {
				
				alert.title = TITLE_NEW_ALERT;
				alert.description = DESCRIPTION_NEW_ALERT;
				alert.icon_name = "list-add";

			} else {
				
				alert.title = TITLE_SELECT_ALERT;
				alert.description = DESCRIPTION_SELECTED_ALERT;
				alert.icon_name = "emblem-default";
			}
		}
	} 
}