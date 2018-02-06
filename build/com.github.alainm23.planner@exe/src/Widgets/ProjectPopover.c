/* ProjectPopover.c generated by valac 0.36.10, the Vala compiler
 * generated from ProjectPopover.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <glib/gi18n-lib.h>
#include <granite.h>


#define PLANNER_TYPE_PROJECT_POPOVER (planner_project_popover_get_type ())
#define PLANNER_PROJECT_POPOVER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANNER_TYPE_PROJECT_POPOVER, PlannerProjectPopover))
#define PLANNER_PROJECT_POPOVER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANNER_TYPE_PROJECT_POPOVER, PlannerProjectPopoverClass))
#define PLANNER_IS_PROJECT_POPOVER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANNER_TYPE_PROJECT_POPOVER))
#define PLANNER_IS_PROJECT_POPOVER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANNER_TYPE_PROJECT_POPOVER))
#define PLANNER_PROJECT_POPOVER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANNER_TYPE_PROJECT_POPOVER, PlannerProjectPopoverClass))

typedef struct _PlannerProjectPopover PlannerProjectPopover;
typedef struct _PlannerProjectPopoverClass PlannerProjectPopoverClass;
typedef struct _PlannerProjectPopoverPrivate PlannerProjectPopoverPrivate;

#define PLANNER_TYPE_PROJECT_LIST (planner_project_list_get_type ())
#define PLANNER_PROJECT_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANNER_TYPE_PROJECT_LIST, PlannerProjectList))
#define PLANNER_PROJECT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANNER_TYPE_PROJECT_LIST, PlannerProjectListClass))
#define PLANNER_IS_PROJECT_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANNER_TYPE_PROJECT_LIST))
#define PLANNER_IS_PROJECT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANNER_TYPE_PROJECT_LIST))
#define PLANNER_PROJECT_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANNER_TYPE_PROJECT_LIST, PlannerProjectListClass))

typedef struct _PlannerProjectList PlannerProjectList;
typedef struct _PlannerProjectListClass PlannerProjectListClass;

#define PLANNER_TYPE_PROJECT_NEW (planner_project_new_get_type ())
#define PLANNER_PROJECT_NEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PLANNER_TYPE_PROJECT_NEW, PlannerProjectNew))
#define PLANNER_PROJECT_NEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PLANNER_TYPE_PROJECT_NEW, PlannerProjectNewClass))
#define PLANNER_IS_PROJECT_NEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PLANNER_TYPE_PROJECT_NEW))
#define PLANNER_IS_PROJECT_NEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PLANNER_TYPE_PROJECT_NEW))
#define PLANNER_PROJECT_NEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PLANNER_TYPE_PROJECT_NEW, PlannerProjectNewClass))

typedef struct _PlannerProjectNew PlannerProjectNew;
typedef struct _PlannerProjectNewClass PlannerProjectNewClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _PlannerProjectPopover {
	GtkPopover parent_instance;
	PlannerProjectPopoverPrivate * priv;
};

struct _PlannerProjectPopoverClass {
	GtkPopoverClass parent_class;
};

struct _PlannerProjectPopoverPrivate {
	PlannerProjectList* project_list;
	PlannerProjectNew* project_new;
	GtkStack* stack;
	GtkLabel* title_label;
	GtkButton* add_button;
	GtkButton* save_button;
	GtkButton* calcel_button;
};


static gpointer planner_project_popover_parent_class = NULL;

GType planner_project_popover_get_type (void) G_GNUC_CONST;
GType planner_project_list_get_type (void) G_GNUC_CONST;
GType planner_project_new_get_type (void) G_GNUC_CONST;
#define PLANNER_PROJECT_POPOVER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), PLANNER_TYPE_PROJECT_POPOVER, PlannerProjectPopoverPrivate))
enum  {
	PLANNER_PROJECT_POPOVER_0_PROPERTY
};
PlannerProjectPopover* planner_project_popover_new (GtkWidget* relative);
PlannerProjectPopover* planner_project_popover_construct (GType object_type, GtkWidget* relative);
static GObject * planner_project_popover_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
PlannerProjectList* planner_project_list_new (void);
PlannerProjectList* planner_project_list_construct (GType object_type);
PlannerProjectNew* planner_project_new_new (void);
PlannerProjectNew* planner_project_new_construct (GType object_type);
static void _planner_project_popover___lambda5_ (PlannerProjectPopover* self);
static void __planner_project_popover___lambda5__gtk_button_clicked (GtkButton* _sender, gpointer self);
static void _planner_project_popover___lambda6_ (PlannerProjectPopover* self);
static void __planner_project_popover___lambda6__gtk_button_clicked (GtkButton* _sender, gpointer self);
static void planner_project_popover_finalize (GObject * obj);


PlannerProjectPopover* planner_project_popover_construct (GType object_type, GtkWidget* relative) {
	PlannerProjectPopover * self = NULL;
	GtkWidget* _tmp0_;
	GtkButton* _tmp1_;
	GtkButton* _tmp2_;
#line 13 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	g_return_val_if_fail (relative != NULL, NULL);
#line 15 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp0_ = relative;
#line 15 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	self = (PlannerProjectPopover*) g_object_new (object_type, "modal", TRUE, "position", GTK_POS_BOTTOM, "relative-to", _tmp0_, NULL);
#line 21 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp1_ = self->priv->save_button;
#line 21 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_visible ((GtkWidget*) _tmp1_, FALSE);
#line 22 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp2_ = self->priv->calcel_button;
#line 22 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_visible ((GtkWidget*) _tmp2_, FALSE);
#line 13 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	return self;
#line 109 "ProjectPopover.c"
}


PlannerProjectPopover* planner_project_popover_new (GtkWidget* relative) {
#line 13 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	return planner_project_popover_construct (PLANNER_TYPE_PROJECT_POPOVER, relative);
#line 116 "ProjectPopover.c"
}


static void _planner_project_popover___lambda5_ (PlannerProjectPopover* self) {
	GtkStack* _tmp0_;
	GtkLabel* _tmp1_;
	GtkButton* _tmp2_;
	GtkButton* _tmp3_;
	GtkButton* _tmp4_;
#line 68 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp0_ = self->priv->stack;
#line 68 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_stack_set_visible_child_name (_tmp0_, "project_new");
#line 69 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp1_ = self->priv->title_label;
#line 69 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_label_set_text (_tmp1_, _ ("New Project"));
#line 70 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp2_ = self->priv->save_button;
#line 70 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_visible ((GtkWidget*) _tmp2_, TRUE);
#line 71 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp3_ = self->priv->calcel_button;
#line 71 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_visible ((GtkWidget*) _tmp3_, TRUE);
#line 72 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp4_ = self->priv->add_button;
#line 72 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_visible ((GtkWidget*) _tmp4_, FALSE);
#line 146 "ProjectPopover.c"
}


static void __planner_project_popover___lambda5__gtk_button_clicked (GtkButton* _sender, gpointer self) {
#line 66 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_planner_project_popover___lambda5_ ((PlannerProjectPopover*) self);
#line 153 "ProjectPopover.c"
}


static void _planner_project_popover___lambda6_ (PlannerProjectPopover* self) {
	GtkStack* _tmp0_;
	GtkLabel* _tmp1_;
	GtkButton* _tmp2_;
	GtkButton* _tmp3_;
	GtkButton* _tmp4_;
#line 88 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp0_ = self->priv->stack;
#line 88 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_stack_set_visible_child_name (_tmp0_, "project_list");
#line 89 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp1_ = self->priv->title_label;
#line 89 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_label_set_text (_tmp1_, _ ("Projects"));
#line 90 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp2_ = self->priv->save_button;
#line 90 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_visible ((GtkWidget*) _tmp2_, FALSE);
#line 91 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp3_ = self->priv->calcel_button;
#line 91 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_visible ((GtkWidget*) _tmp3_, FALSE);
#line 92 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp4_ = self->priv->add_button;
#line 92 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_visible ((GtkWidget*) _tmp4_, TRUE);
#line 183 "ProjectPopover.c"
}


static void __planner_project_popover___lambda6__gtk_button_clicked (GtkButton* _sender, gpointer self) {
#line 86 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_planner_project_popover___lambda6_ ((PlannerProjectPopover*) self);
#line 190 "ProjectPopover.c"
}


static GObject * planner_project_popover_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	PlannerProjectPopover * self;
	GtkGrid* main_grid = NULL;
	GtkGrid* _tmp0_;
	GtkGrid* _tmp1_;
	GtkGrid* _tmp2_;
	GtkGrid* _tmp3_;
	GtkGrid* _tmp4_;
	GtkGrid* _tmp5_;
	GtkGrid* _tmp6_;
	GtkGrid* _tmp7_;
	GtkStack* _tmp8_;
	GtkStack* _tmp9_;
	GtkStack* _tmp10_;
	GtkStack* _tmp11_;
	PlannerProjectList* _tmp12_;
	PlannerProjectNew* _tmp13_;
	GtkStack* _tmp14_;
	PlannerProjectList* _tmp15_;
	GtkStack* _tmp16_;
	PlannerProjectNew* _tmp17_;
	GtkBox* v_box = NULL;
	GtkBox* _tmp18_;
	GtkBox* _tmp19_;
	GtkBox* _tmp20_;
	GtkLabel* _tmp21_;
	GtkLabel* _tmp22_;
	GtkLabel* _tmp23_;
	GtkStyleContext* _tmp24_;
	GtkButton* _tmp25_;
	GtkButton* _tmp26_;
	GtkButton* _tmp27_;
	GtkButton* _tmp28_;
	GtkButton* _tmp29_;
	GtkButton* _tmp30_;
	GtkButton* _tmp31_;
	GtkButton* _tmp32_;
	GtkButton* _tmp33_;
	GtkSeparator* separator = NULL;
	GtkSeparator* _tmp34_;
	GtkBox* _tmp35_;
	GtkLabel* _tmp36_;
	GtkBox* _tmp37_;
	GtkButton* _tmp38_;
	GtkBox* _tmp39_;
	GtkButton* _tmp40_;
	GtkBox* _tmp41_;
	GtkButton* _tmp42_;
	GtkGrid* _tmp43_;
	GtkBox* _tmp44_;
	GtkGrid* _tmp45_;
	GtkSeparator* _tmp46_;
	GtkGrid* _tmp47_;
	GtkStack* _tmp48_;
#line 25 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	parent_class = G_OBJECT_CLASS (planner_project_popover_parent_class);
#line 25 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 25 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANNER_TYPE_PROJECT_POPOVER, PlannerProjectPopover);
#line 28 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp0_ = (GtkGrid*) gtk_grid_new ();
#line 28 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	g_object_ref_sink (_tmp0_);
#line 28 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	main_grid = _tmp0_;
#line 29 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp1_ = main_grid;
#line 29 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_orientable_set_orientation ((GtkOrientable*) _tmp1_, GTK_ORIENTATION_VERTICAL);
#line 30 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp2_ = main_grid;
#line 30 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_margin_bottom ((GtkWidget*) _tmp2_, 6);
#line 31 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp3_ = main_grid;
#line 31 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_margin_top ((GtkWidget*) _tmp3_, 6);
#line 32 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp4_ = main_grid;
#line 32 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_margin_right ((GtkWidget*) _tmp4_, 12);
#line 33 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp5_ = main_grid;
#line 33 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_margin_left ((GtkWidget*) _tmp5_, 12);
#line 34 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp6_ = main_grid;
#line 34 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_size_request ((GtkWidget*) _tmp6_, 280, 350);
#line 35 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp7_ = main_grid;
#line 35 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp7_);
#line 38 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp8_ = (GtkStack*) gtk_stack_new ();
#line 38 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	g_object_ref_sink (_tmp8_);
#line 38 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (self->priv->stack);
#line 38 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	self->priv->stack = _tmp8_;
#line 39 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp9_ = self->priv->stack;
#line 39 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_vexpand ((GtkWidget*) _tmp9_, TRUE);
#line 40 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp10_ = self->priv->stack;
#line 40 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_hexpand ((GtkWidget*) _tmp10_, TRUE);
#line 41 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp11_ = self->priv->stack;
#line 41 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_stack_set_transition_type (_tmp11_, GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT);
#line 44 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp12_ = planner_project_list_new ();
#line 44 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	g_object_ref_sink (_tmp12_);
#line 44 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (self->priv->project_list);
#line 44 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	self->priv->project_list = _tmp12_;
#line 45 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp13_ = planner_project_new_new ();
#line 45 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	g_object_ref_sink (_tmp13_);
#line 45 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (self->priv->project_new);
#line 45 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	self->priv->project_new = _tmp13_;
#line 47 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp14_ = self->priv->stack;
#line 47 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp15_ = self->priv->project_list;
#line 47 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_stack_add_named (_tmp14_, (GtkWidget*) _tmp15_, "project_list");
#line 48 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp16_ = self->priv->stack;
#line 48 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp17_ = self->priv->project_new;
#line 48 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_stack_add_named (_tmp16_, (GtkWidget*) _tmp17_, "project_new");
#line 52 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp18_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);
#line 52 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	g_object_ref_sink (_tmp18_);
#line 52 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	v_box = _tmp18_;
#line 53 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp19_ = v_box;
#line 53 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_margin_bottom ((GtkWidget*) _tmp19_, 12);
#line 54 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp20_ = v_box;
#line 54 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_margin_top ((GtkWidget*) _tmp20_, 12);
#line 59 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp21_ = (GtkLabel*) gtk_label_new (_ ("Projects"));
#line 59 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	g_object_ref_sink (_tmp21_);
#line 59 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (self->priv->title_label);
#line 59 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	self->priv->title_label = _tmp21_;
#line 60 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp22_ = self->priv->title_label;
#line 60 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_halign ((GtkWidget*) _tmp22_, GTK_ALIGN_START);
#line 61 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp23_ = self->priv->title_label;
#line 61 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp24_ = gtk_widget_get_style_context ((GtkWidget*) _tmp23_);
#line 61 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_style_context_add_class (_tmp24_, GRANITE_STYLE_CLASS_H3_LABEL);
#line 64 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp25_ = (GtkButton*) gtk_button_new_from_icon_name ("folder-new-symbolic", GTK_ICON_SIZE_MENU);
#line 64 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	g_object_ref_sink (_tmp25_);
#line 64 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (self->priv->add_button);
#line 64 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	self->priv->add_button = _tmp25_;
#line 66 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp26_ = self->priv->add_button;
#line 66 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	g_signal_connect_object (_tmp26_, "clicked", (GCallback) __planner_project_popover___lambda5__gtk_button_clicked, self, 0);
#line 77 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp27_ = (GtkButton*) gtk_button_new_from_icon_name ("document-save-as-symbolic", GTK_ICON_SIZE_MENU);
#line 77 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	g_object_ref_sink (_tmp27_);
#line 77 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (self->priv->save_button);
#line 77 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	self->priv->save_button = _tmp27_;
#line 78 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp28_ = self->priv->save_button;
#line 78 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_visible ((GtkWidget*) _tmp28_, FALSE);
#line 79 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp29_ = self->priv->save_button;
#line 79 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_no_show_all ((GtkWidget*) _tmp29_, TRUE);
#line 80 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp30_ = (GtkButton*) gtk_button_new_from_icon_name ("window-close-symbolic", GTK_ICON_SIZE_MENU);
#line 80 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	g_object_ref_sink (_tmp30_);
#line 80 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (self->priv->calcel_button);
#line 80 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	self->priv->calcel_button = _tmp30_;
#line 81 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp31_ = self->priv->calcel_button;
#line 81 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_visible ((GtkWidget*) _tmp31_, FALSE);
#line 82 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp32_ = self->priv->calcel_button;
#line 82 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_widget_set_no_show_all ((GtkWidget*) _tmp32_, TRUE);
#line 86 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp33_ = self->priv->calcel_button;
#line 86 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	g_signal_connect_object (_tmp33_, "clicked", (GCallback) __planner_project_popover___lambda6__gtk_button_clicked, self, 0);
#line 96 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp34_ = (GtkSeparator*) gtk_separator_new (GTK_ORIENTATION_HORIZONTAL);
#line 96 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	g_object_ref_sink (_tmp34_);
#line 96 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	separator = _tmp34_;
#line 98 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp35_ = v_box;
#line 98 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp36_ = self->priv->title_label;
#line 98 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_box_pack_start (_tmp35_, (GtkWidget*) _tmp36_, FALSE, TRUE, (guint) 6);
#line 100 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp37_ = v_box;
#line 100 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp38_ = self->priv->add_button;
#line 100 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_box_pack_end (_tmp37_, (GtkWidget*) _tmp38_, FALSE, TRUE, (guint) 6);
#line 101 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp39_ = v_box;
#line 101 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp40_ = self->priv->save_button;
#line 101 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_box_pack_end (_tmp39_, (GtkWidget*) _tmp40_, FALSE, TRUE, (guint) 6);
#line 102 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp41_ = v_box;
#line 102 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp42_ = self->priv->calcel_button;
#line 102 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_box_pack_end (_tmp41_, (GtkWidget*) _tmp42_, FALSE, TRUE, (guint) 6);
#line 106 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp43_ = main_grid;
#line 106 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp44_ = v_box;
#line 106 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_grid_attach (_tmp43_, (GtkWidget*) _tmp44_, 0, 0, 1, 1);
#line 107 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp45_ = main_grid;
#line 107 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp46_ = separator;
#line 107 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_grid_attach (_tmp45_, (GtkWidget*) _tmp46_, 0, 1, 2, 1);
#line 108 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp47_ = main_grid;
#line 108 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_tmp48_ = self->priv->stack;
#line 108 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	gtk_grid_attach (_tmp47_, (GtkWidget*) _tmp48_, 0, 2, 1, 1);
#line 25 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (separator);
#line 25 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (v_box);
#line 25 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (main_grid);
#line 25 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	return obj;
#line 474 "ProjectPopover.c"
}


static void planner_project_popover_class_init (PlannerProjectPopoverClass * klass) {
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	planner_project_popover_parent_class = g_type_class_peek_parent (klass);
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	g_type_class_add_private (klass, sizeof (PlannerProjectPopoverPrivate));
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	G_OBJECT_CLASS (klass)->constructor = planner_project_popover_constructor;
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	G_OBJECT_CLASS (klass)->finalize = planner_project_popover_finalize;
#line 487 "ProjectPopover.c"
}


static void planner_project_popover_instance_init (PlannerProjectPopover * self) {
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	self->priv = PLANNER_PROJECT_POPOVER_GET_PRIVATE (self);
#line 494 "ProjectPopover.c"
}


static void planner_project_popover_finalize (GObject * obj) {
	PlannerProjectPopover * self;
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, PLANNER_TYPE_PROJECT_POPOVER, PlannerProjectPopover);
#line 4 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (self->priv->project_list);
#line 5 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (self->priv->project_new);
#line 7 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (self->priv->stack);
#line 8 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (self->priv->title_label);
#line 9 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (self->priv->add_button);
#line 10 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (self->priv->save_button);
#line 11 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	_g_object_unref0 (self->priv->calcel_button);
#line 2 "/home/alain/Vala/planner/src/Widgets/ProjectPopover.vala"
	G_OBJECT_CLASS (planner_project_popover_parent_class)->finalize (obj);
#line 518 "ProjectPopover.c"
}


GType planner_project_popover_get_type (void) {
	static volatile gsize planner_project_popover_type_id__volatile = 0;
	if (g_once_init_enter (&planner_project_popover_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PlannerProjectPopoverClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) planner_project_popover_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PlannerProjectPopover), 0, (GInstanceInitFunc) planner_project_popover_instance_init, NULL };
		GType planner_project_popover_type_id;
		planner_project_popover_type_id = g_type_register_static (gtk_popover_get_type (), "PlannerProjectPopover", &g_define_type_info, 0);
		g_once_init_leave (&planner_project_popover_type_id__volatile, planner_project_popover_type_id);
	}
	return planner_project_popover_type_id__volatile;
}



