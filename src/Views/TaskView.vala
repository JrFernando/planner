namespace Planner {
	public class TaskView : Gtk.EventBox {

		private MilestoneList milestones_list;
		private TaskList task_list;
		
		public TaskView () {

			get_style_context ().add_class (Gtk.STYLE_CLASS_VIEW);
        	get_style_context ().add_class (Granite.STYLE_CLASS_WELCOME);

			build_ui ();
		}

		private void build_ui () {

			milestones_list = new MilestoneList ();

			task_list = new TaskList ();

			var main_grid = new Gtk.Grid ();
			main_grid.orientation = Gtk.Orientation.HORIZONTAL;

			var separator = new Gtk.Separator (Gtk.Orientation.VERTICAL);
			separator.margin_top = 50;
            separator.margin_bottom = 50;

			milestones_list.list_selected.connect ( (list) => {
				
				task_list.set_list (list);
			
			});

			main_grid.add (milestones_list);
			main_grid.add (separator);
			main_grid.add (task_list);

			add (main_grid);

		}

		public void update_widget () {

			milestones_list.update_list ();

		}
	}
}