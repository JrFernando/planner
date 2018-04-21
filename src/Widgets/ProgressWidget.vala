namespace Planner {
    public class ProgressWidget : Gtk.Grid {
        private Gtk.Label value_label;
        private Gtk.LevelBar all_levelbar;

        public ProgressWidget () {
            hexpand = true;
            //margin_left = 50;
            //margin_right = 50;

            build_ui ();
        }
        private void build_ui () {
            var main_grid = new Gtk.Grid ();

            all_levelbar = new Gtk.LevelBar.for_interval (0, 1);
            all_levelbar.hexpand = true;
            all_levelbar.height_request = 12;

            value_label = new Gtk.Label ("");
            value_label.use_markup = true;
            value_label.label = _("Completed: <b>%s%</b>").printf("0");

            main_grid.attach (value_label, 0, 0, 1, 1);
            main_grid.attach (all_levelbar, 0, 0, 1, 1);

            add (main_grid);
        }

        public void update_widget (double value) {
            all_levelbar.value = value;

            double v = value * 100;
            int v2 = (int)v;

            value_label.label = _("Completed: <b>%s%</b>").printf(v.to_string ().substring (0, 2));

        }
    }
}
