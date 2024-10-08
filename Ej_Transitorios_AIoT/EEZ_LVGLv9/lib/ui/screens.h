#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main1;
    lv_obj_t *bt_conectado_2;
    lv_obj_t *bt_conectado_3;
    lv_obj_t *bt_conectar_wifi_2;
    lv_obj_t *bt_desconectar_wi_fi_2;
    lv_obj_t *bt_desconectar_wi_fi_3;
    lv_obj_t *bt_dhms_1;
    lv_obj_t *bt_dhms_2;
    lv_obj_t *bt_dhms_3;
    lv_obj_t *bt_minus;
    lv_obj_t *bt_plus;
    lv_obj_t *bt_rescan_wi_fi_3;
    lv_obj_t *drop_down_1;
    lv_obj_t *label_counter;
    lv_obj_t *label_dhms_1;
    lv_obj_t *label_dhms_2;
    lv_obj_t *label_dhms_3;
    lv_obj_t *label_direccion_dns;
    lv_obj_t *label_direccion_ip;
    lv_obj_t *label_direccion_mac;
    lv_obj_t *label_red_wi_fi_ssid;
    lv_obj_t *pag1;
    lv_obj_t *pag2;
    lv_obj_t *pag3;
    lv_obj_t *panel02_1;
    lv_obj_t *panel02_2;
    lv_obj_t *panel02_3;
    lv_obj_t *panel03_1;
    lv_obj_t *panel03_2;
    lv_obj_t *panel03_3;
    lv_obj_t *ui_lab_dns;
    lv_obj_t *ui_lab_ip;
    lv_obj_t *ui_lab_mac;
    lv_obj_t *ui_lab_ssid;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN1 = 1,
};

void create_screen_main1();
void tick_screen_main1();

void create_screens();
void tick_screen(int screen_index);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/