#include "ui.h"
#include "screens.h"
#include "images.h"
#include "flow_def.h"
#include "actions.h"

ActionExecFunc actions[] = {
    action_fn_plus,
    action_fn_minus,
    action_fn_conectar_wi_fi,
    action_fn_desconectar_wi_fi,
    action_fn_rescan_wi_fi,
};


void ui_init() {
    eez_flow_init(assets, sizeof(assets), (lv_obj_t **)&objects, sizeof(objects), images, sizeof(images), actions);
}

void ui_tick() {
    eez_flow_tick();
    tick_screen(g_currentScreen);
}
