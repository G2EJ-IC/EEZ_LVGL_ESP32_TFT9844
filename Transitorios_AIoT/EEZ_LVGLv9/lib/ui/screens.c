#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

objects_t objects;
lv_obj_t *tick_value_change_obj;

static void event_handler_cb_main1_bt_plus(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        action_fn_plus(e);
    }
}

static void event_handler_cb_main1_bt_minus(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        action_fn_minus(e);
    }
}

static void event_handler_cb_main1_bt_dhms_1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        action_fn_pagina_3_tres(e);
    }
}

static void event_handler_cb_main1_bt_conectar_wifi_2(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        action_fn_conectar_wi_fi(e);
    }
}

static void event_handler_cb_main1_bt_desconectar_wi_fi_2(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        action_fn_desconectar_wi_fi(e);
    }
}

static void event_handler_cb_main1_bt_dhms_2(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        action_fn_pagina_3_tres(e);
    }
}

static void event_handler_cb_main1_bt_rescan_wi_fi_3(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        action_fn_rescan_wi_fi(e);
    }
}

static void event_handler_cb_main1_bt_desconectar_wi_fi_3(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        action_fn_desconectar_wi_fi(e);
    }
}

static void event_handler_cb_main1_bt_dhms_3(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        action_fn_pagina_3_tres(e);
    }
}

void create_screen_main1() {
    void *flowState = getFlowState(0, 0);
    lv_obj_t *obj = lv_obj_create(0);
    objects.main1 = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 320);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_tabview_create(parent_obj);
            lv_tabview_set_tab_bar_position(obj, LV_DIR_TOP);
            lv_tabview_set_tab_bar_size(obj, 32);
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 480, 320);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_tabview_add_tab(parent_obj, "Pag. 1");
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_obj_create(parent_obj);
                            lv_obj_set_pos(obj, -16, -16);
                            lv_obj_set_size(obj, 480, 288);
                            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    // Panel02_1
                                    lv_obj_t *obj = lv_obj_create(parent_obj);
                                    objects.panel02_1 = obj;
                                    lv_obj_set_pos(obj, 12, 8);
                                    lv_obj_set_size(obj, LV_PCT(95), LV_PCT(20));
                                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffc8c8c8), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_arc_width(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            // Bt_Plus
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_plus = obj;
                                            lv_obj_set_pos(obj, -8, -5);
                                            lv_obj_set_size(obj, LV_PCT(20), LV_PCT(150));
                                            lv_obj_add_event_cb(obj, event_handler_cb_main1_bt_plus, LV_EVENT_ALL, flowState);
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 18, -12);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "+");
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                            }
                                        }
                                        {
                                            // LabelCounter
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            objects.label_counter = obj;
                                            lv_obj_set_pos(obj, 0, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_label_set_text(obj, "0");
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                        {
                                            // Bt_Minus
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_minus = obj;
                                            lv_obj_set_pos(obj, 341, -5);
                                            lv_obj_set_size(obj, LV_PCT(20), LV_PCT(150));
                                            lv_obj_add_event_cb(obj, event_handler_cb_main1_bt_minus, LV_EVENT_ALL, flowState);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 21, -12);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "-");
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                            }
                                        }
                                    }
                                }
                                {
                                    // Panel03_1
                                    lv_obj_t *obj = lv_obj_create(parent_obj);
                                    objects.panel03_1 = obj;
                                    lv_obj_set_pos(obj, 13, 70);
                                    lv_obj_set_size(obj, LV_PCT(95), LV_PCT(74));
                                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffc8c8c8), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_arc_width(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            // DropDown_1
                                            lv_obj_t *obj = lv_dropdown_create(parent_obj);
                                            objects.drop_down_1 = obj;
                                            lv_obj_set_pos(obj, -8, -6);
                                            lv_obj_set_size(obj, 208, 40);
                                            lv_dropdown_set_options(obj, "WiFi Manager\nWiFi Multi");
                                        }
                                        {
                                            // Bt_DHMS_1
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_dhms_1 = obj;
                                            lv_obj_set_pos(obj, -10, 148);
                                            lv_obj_set_size(obj, 200, 30);
                                            lv_obj_add_event_cb(obj, event_handler_cb_main1_bt_dhms_1, LV_EVENT_ALL, flowState);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    // LabelDHMS_1
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    objects.label_dhms_1 = obj;
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "00d 00h 00m 00.00s");
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_img_create(parent_obj);
                                            lv_obj_set_pos(obj, 346, 61);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_img_set_src(obj, &img_g2_ejv2);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_tabview_add_tab(parent_obj, "Pag. 2");
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_obj_create(parent_obj);
                            lv_obj_set_pos(obj, -16, -16);
                            lv_obj_set_size(obj, 480, 288);
                            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    // Panel02_2
                                    lv_obj_t *obj = lv_obj_create(parent_obj);
                                    objects.panel02_2 = obj;
                                    lv_obj_set_pos(obj, 12, 8);
                                    lv_obj_set_size(obj, LV_PCT(95), LV_PCT(20));
                                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffc8c8c8), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_arc_width(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            // Bt_Conectar_Wifi_2
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_conectar_wifi_2 = obj;
                                            lv_obj_set_pos(obj, -8, -5);
                                            lv_obj_set_size(obj, LV_PCT(45), LV_PCT(150));
                                            lv_obj_add_event_cb(obj, event_handler_cb_main1_bt_conectar_wifi_2, LV_EVENT_ALL, flowState);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 17, -5);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "Conectar WiFi");
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                            }
                                        }
                                        {
                                            // Bt_Desconectar_WiFi_2
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_desconectar_wi_fi_2 = obj;
                                            lv_obj_set_pos(obj, 236, -5);
                                            lv_obj_set_size(obj, LV_PCT(45), LV_PCT(150));
                                            lv_obj_add_event_cb(obj, event_handler_cb_main1_bt_desconectar_wi_fi_2, LV_EVENT_ALL, flowState);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 1, -5);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "Desconectar WiFi");
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                            }
                                        }
                                        {
                                            // Bt_Conectado_2
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_conectado_2 = obj;
                                            lv_obj_set_pos(obj, 195, -6);
                                            lv_obj_set_size(obj, 32, 32);
                                            lv_obj_set_style_radius(obj, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffff0000), LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                    }
                                }
                                {
                                    // Panel03_2
                                    lv_obj_t *obj = lv_obj_create(parent_obj);
                                    objects.panel03_2 = obj;
                                    lv_obj_set_pos(obj, 13, 70);
                                    lv_obj_set_size(obj, LV_PCT(95), LV_PCT(74));
                                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffc8c8c8), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_arc_width(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            // Label_Red_WiFi_SSID
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            objects.label_red_wi_fi_ssid = obj;
                                            lv_obj_set_pos(obj, -160, -70);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_label_set_text(obj, "Red WiFi (SSID).:");
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                        {
                                            // ui_LabSSID
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            objects.ui_lab_ssid = obj;
                                            lv_obj_set_pos(obj, 125, -4);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_label_set_text(obj, "Nombre WiFi (SSID).:");
                                            lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                        {
                                            // Label_Direccion_IP
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            objects.label_direccion_ip = obj;
                                            lv_obj_set_pos(obj, -173, -35);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_label_set_text(obj, "Direccion IP.:");
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                        {
                                            // ui_LabIP
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            objects.ui_lab_ip = obj;
                                            lv_obj_set_pos(obj, 125, 31);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_label_set_text(obj, "xx.xx.xx.xx");
                                            lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                        {
                                            // Label_Direccion_DNS
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            objects.label_direccion_dns = obj;
                                            lv_obj_set_pos(obj, -164, 0);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_label_set_text(obj, "Direccion DNS.:");
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                        {
                                            // ui_LabDNS
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            objects.ui_lab_dns = obj;
                                            lv_obj_set_pos(obj, 125, 66);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_label_set_text(obj, "xx.xx.xx.xx");
                                            lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                        {
                                            // Label_Direccion_MAC
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            objects.label_direccion_mac = obj;
                                            lv_obj_set_pos(obj, -164, 32);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_label_set_text(obj, "Direccion MAC.:");
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                        {
                                            // ui_LabMAC
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            objects.ui_lab_mac = obj;
                                            lv_obj_set_pos(obj, 125, 98);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_label_set_text(obj, "xx:xx:xx:xx:xx:xx");
                                            lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                        {
                                            // Bt_DHMS_2
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_dhms_2 = obj;
                                            lv_obj_set_pos(obj, -10, 148);
                                            lv_obj_set_size(obj, 200, 30);
                                            lv_obj_add_event_cb(obj, event_handler_cb_main1_bt_dhms_2, LV_EVENT_ALL, flowState);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    // LabelDHMS_2
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    objects.label_dhms_2 = obj;
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "00d 00h 00m 00.000s");
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_img_create(parent_obj);
                                            lv_obj_set_pos(obj, 346, 61);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_img_set_src(obj, &img_g2_ejv2);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                {
                    lv_obj_t *obj = lv_tabview_add_tab(parent_obj, "Pag. 3");
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            lv_obj_t *obj = lv_obj_create(parent_obj);
                            lv_obj_set_pos(obj, -16, -16);
                            lv_obj_set_size(obj, 480, 288);
                            lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_bg_opa(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    // Panel02_3
                                    lv_obj_t *obj = lv_obj_create(parent_obj);
                                    objects.panel02_3 = obj;
                                    lv_obj_set_pos(obj, 12, 8);
                                    lv_obj_set_size(obj, LV_PCT(95), LV_PCT(20));
                                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffc8c8c8), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_arc_width(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            // Bt_Rescan_WiFi_3
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_rescan_wi_fi_3 = obj;
                                            lv_obj_set_pos(obj, -8, -5);
                                            lv_obj_set_size(obj, LV_PCT(45), LV_PCT(150));
                                            lv_obj_add_event_cb(obj, event_handler_cb_main1_bt_rescan_wi_fi_3, LV_EVENT_ALL, flowState);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 26, -5);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "ReScanWiFi");
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                            }
                                        }
                                        {
                                            // Bt_Desconectar_WiFi_3
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_desconectar_wi_fi_3 = obj;
                                            lv_obj_set_pos(obj, 236, -5);
                                            lv_obj_set_size(obj, LV_PCT(45), LV_PCT(150));
                                            lv_obj_add_event_cb(obj, event_handler_cb_main1_bt_desconectar_wi_fi_3, LV_EVENT_ALL, flowState);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 1, -5);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "Desconectar WiFi");
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                            }
                                        }
                                        {
                                            // Bt_Conectado_3
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_conectado_3 = obj;
                                            lv_obj_set_pos(obj, 195, -6);
                                            lv_obj_set_size(obj, 32, 32);
                                            lv_obj_set_style_radius(obj, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffff0000), LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                    }
                                }
                                {
                                    // Panel03_3
                                    lv_obj_t *obj = lv_obj_create(parent_obj);
                                    objects.panel03_3 = obj;
                                    lv_obj_set_pos(obj, 13, 70);
                                    lv_obj_set_size(obj, LV_PCT(95), LV_PCT(74));
                                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffc8c8c8), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_arc_width(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            // Bt_DHMS_3
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_dhms_3 = obj;
                                            lv_obj_set_pos(obj, -10, 148);
                                            lv_obj_set_size(obj, 200, 30);
                                            lv_obj_add_event_cb(obj, event_handler_cb_main1_bt_dhms_3, LV_EVENT_ALL, flowState);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    // LabelDHMS_3
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    objects.label_dhms_3 = obj;
                                                    lv_obj_set_pos(obj, 0, 0);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "00d 00h 00m 00.000s");
                                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_img_create(parent_obj);
                                            lv_obj_set_pos(obj, 319, 22);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_img_set_src(obj, &img_g2_ejv1);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void tick_screen_main1() {
    void *flowState = getFlowState(0, 0);
}


void create_screens() {
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_main1();
}

typedef void (*tick_screen_func_t)();

tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_main1,
};

void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
