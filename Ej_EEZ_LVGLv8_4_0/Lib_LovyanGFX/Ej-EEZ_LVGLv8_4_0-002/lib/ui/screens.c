#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

objects_t objects;
lv_obj_t *tick_value_change_obj;

static void event_handler_cb_main1_bt_der_pag2(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_PRESSED) {
        flowPropagateValue(flowState, 6, 0);
    }
}

static void event_handler_cb_main2_bt_plus(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        flowPropagateValue(flowState, 5, 0);
    }
}

static void event_handler_cb_main2_bt_minus(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        flowPropagateValue(flowState, 8, 0);
    }
}

static void event_handler_cb_main2_bt_dhms_1(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        flowPropagateValue(flowState, -1, 2);
    }
}

static void event_handler_cb_main2_bt_rescan_wi_fi_3(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        action_fn_rescan_wi_fi(e);
    }
}

static void event_handler_cb_main2_bt_desconectar_wi_fi_3(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        action_fn_desconectar_wi_fi(e);
    }
}

static void event_handler_cb_main2_bt_conectar_wifi_2(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        action_fn_conectar_wi_fi(e);
    }
}

static void event_handler_cb_main2_bt_desconectar_wi_fi_2(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        action_fn_desconectar_wi_fi(e);
    }
}

static void event_handler_cb_main2_bt_dhms_2(lv_event_t *e) {
    lv_event_code_t event = lv_event_get_code(e);
    void *flowState = e->user_data;
    if (event == LV_EVENT_CLICKED) {
        flowPropagateValue(flowState, -1, 2);
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
            lv_obj_t *obj = lv_obj_create(parent_obj);
            lv_obj_set_pos(obj, LV_PCT(2), LV_PCT(2));
            lv_obj_set_size(obj, LV_PCT(96), LV_PCT(96));
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
                    // Panel_AIoT
                    lv_obj_t *obj = lv_obj_create(parent_obj);
                    objects.panel_aio_t = obj;
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_PCT(100), LV_PCT(100));
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffc8c8c8), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_arc_width(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                    {
                        lv_obj_t *parent_obj = obj;
                        {
                            // Img_ud_FJdC_58x77
                            lv_obj_t *obj = lv_img_create(parent_obj);
                            objects.img_ud_fjd_c_58x77 = obj;
                            lv_obj_set_pos(obj, -8, -11);
                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                            lv_img_set_src(obj, &img_ud_fjd_c_058x077);
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_ADV_HITTEST|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                        }
                        {
                            // PanelNombre
                            lv_obj_t *obj = lv_obj_create(parent_obj);
                            objects.panel_nombre = obj;
                            lv_obj_set_pos(obj, LV_PCT(14), LV_PCT(0));
                            lv_obj_set_size(obj, LV_PCT(72), LV_PCT(20));
                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                            lv_obj_set_style_bg_color(obj, lv_color_hex(0xffc8c8c8), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_arc_width(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                            lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                    lv_obj_set_pos(obj, 0, 0);
                                    lv_obj_set_size(obj, LV_PCT(110), LV_PCT(200));
                                    lv_label_set_long_mode(obj, LV_LABEL_LONG_DOT);
                                    lv_label_set_text(obj, "ERNESTO JOSE GUERRERO GONZALEZ\nAIoT Transitorios Hidraulicos");
                                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                }
                            }
                        }
                        {
                            // BtDerPag2
                            lv_obj_t *obj = lv_btn_create(parent_obj);
                            objects.bt_der_pag2 = obj;
                            lv_obj_set_pos(obj, 394, 11);
                            lv_obj_set_size(obj, 32, 32);
                            lv_obj_add_event_cb(obj, event_handler_cb_main1_bt_der_pag2, LV_EVENT_ALL, flowState);
                            lv_obj_set_style_radius(obj, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
                            {
                                lv_obj_t *parent_obj = obj;
                                {
                                    // ImgDerPag2
                                    lv_obj_t *obj = lv_img_create(parent_obj);
                                    objects.img_der_pag2 = obj;
                                    lv_obj_set_pos(obj, -16, -10);
                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                    lv_img_set_src(obj, &img_der_032x032);
                                }
                            }
                        }
                        {
                            lv_obj_t *obj = lv_img_create(parent_obj);
                            lv_obj_set_pos(obj, 96, 92);
                            lv_obj_set_size(obj, 235, 157);
                            lv_img_set_src(obj, &img_aio_t_235x157);
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

void create_screen_main2() {
    void *flowState = getFlowState(0, 1);
    lv_obj_t *obj = lv_obj_create(0);
    objects.main2 = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 480, 320);
    {
        lv_obj_t *parent_obj = obj;
        {
            // TabViewMain2
            lv_obj_t *obj = lv_tabview_create(parent_obj, LV_DIR_TOP, 30);
            objects.tab_view_main2 = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 480, 320);
            lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE);
            {
                lv_obj_t *parent_obj = obj;
                {
                    // Pag1
                    lv_obj_t *obj = lv_tabview_add_tab(parent_obj, "Pag. 1");
                    objects.pag1 = obj;
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
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
                                    lv_obj_set_pos(obj, LV_PCT(2), 2);
                                    lv_obj_set_size(obj, LV_PCT(96), LV_PCT(15));
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
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
                                            lv_obj_set_pos(obj, LV_PCT(0), -12);
                                            lv_obj_set_size(obj, 32, 32);
                                            lv_obj_add_event_cb(obj, event_handler_cb_main2_bt_plus, LV_EVENT_ALL, flowState);
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_radius(obj, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_img_create(parent_obj);
                                                    lv_obj_set_pos(obj, -16, -10);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_img_set_src(obj, &img_izq_032x032);
                                                }
                                            }
                                        }
                                        {
                                            lv_obj_t *obj = lv_slider_create(parent_obj);
                                            lv_obj_set_pos(obj, 64, -1);
                                            lv_obj_set_size(obj, LV_PCT(70), 10);
                                            lv_slider_set_value(obj, 100, LV_ANIM_OFF);
                                            lv_obj_add_flag(obj, LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ON_FOCUS);
                                        }
                                        {
                                            // Bt_Minus
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_minus = obj;
                                            lv_obj_set_pos(obj, LV_PCT(93), -12);
                                            lv_obj_set_size(obj, 32, 32);
                                            lv_obj_add_event_cb(obj, event_handler_cb_main2_bt_minus, LV_EVENT_ALL, flowState);
                                            lv_obj_set_style_radius(obj, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_img_create(parent_obj);
                                                    lv_obj_set_pos(obj, -16, -10);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_img_set_src(obj, &img_der_032x032);
                                                }
                                            }
                                        }
                                    }
                                }
                                {
                                    // Panel03_1
                                    lv_obj_t *obj = lv_obj_create(parent_obj);
                                    objects.panel03_1 = obj;
                                    lv_obj_set_pos(obj, LV_PCT(2), 49);
                                    lv_obj_set_size(obj, LV_PCT(96), LV_PCT(81));
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
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
                                            lv_obj_set_pos(obj, -8, 178);
                                            lv_obj_set_size(obj, 200, 30);
                                            lv_obj_add_event_cb(obj, event_handler_cb_main2_bt_dhms_1, LV_EVENT_ALL, flowState);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    // LabelDHMS_1
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    objects.label_dhms_1 = obj;
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
                                            lv_obj_set_pos(obj, 321, 19);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_img_set_src(obj, &img_ud_fjd_c);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                {
                    // Pag2
                    lv_obj_t *obj = lv_tabview_add_tab(parent_obj, "Connec To WiFi");
                    objects.pag2 = obj;
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
                                    lv_obj_set_pos(obj, LV_PCT(2), 2);
                                    lv_obj_set_size(obj, LV_PCT(96), LV_PCT(15));
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
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
                                            lv_obj_set_pos(obj, -5, -11);
                                            lv_obj_set_size(obj, LV_PCT(45), 30);
                                            lv_obj_add_event_cb(obj, event_handler_cb_main2_bt_rescan_wi_fi_3, LV_EVENT_ALL, flowState);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 36, -3);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "ReScanWiFi");
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                            }
                                        }
                                        {
                                            // Bt_Desconectar_WiFi_3
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_desconectar_wi_fi_3 = obj;
                                            lv_obj_set_pos(obj, 236, -11);
                                            lv_obj_set_size(obj, LV_PCT(45), 30);
                                            lv_obj_add_event_cb(obj, event_handler_cb_main2_bt_desconectar_wi_fi_3, LV_EVENT_ALL, flowState);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 15, -3);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "Desconectar WiFi");
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                            }
                                        }
                                        {
                                            // Bt_Conectado_3
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_conectado_3 = obj;
                                            lv_obj_set_pos(obj, 196, -12);
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
                                    lv_obj_set_pos(obj, LV_PCT(2), 49);
                                    lv_obj_set_size(obj, LV_PCT(96), LV_PCT(81));
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
                                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffc8c8c8), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_arc_width(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            // Label_WiFi_SSID_Pag1
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            objects.label_wi_fi_ssid_pag1 = obj;
                                            lv_obj_set_pos(obj, -177, -92);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_label_set_long_mode(obj, LV_LABEL_LONG_DOT);
                                            lv_label_set_text(obj, "WiFi (SSID).:");
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                        {
                                            lv_obj_t *obj = lv_dropdown_create(parent_obj);
                                            lv_obj_set_pos(obj, 127, -14);
                                            lv_obj_set_size(obj, 307, 40);
                                            lv_dropdown_set_options(obj, "");
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                        {
                                            // Label_WiFi_Pass_Pag1
                                            lv_obj_t *obj = lv_label_create(parent_obj);
                                            objects.label_wi_fi_pass_pag1 = obj;
                                            lv_obj_set_pos(obj, -161, -52);
                                            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                            lv_label_set_long_mode(obj, LV_LABEL_LONG_DOT);
                                            lv_label_set_text(obj, "WiFi Passwords.:");
                                            lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                        {
                                            // TextAreaPassword
                                            lv_obj_t *obj = lv_textarea_create(parent_obj);
                                            objects.text_area_password = obj;
                                            lv_obj_set_pos(obj, 127, 26);
                                            lv_obj_set_size(obj, 307, 40);
                                            lv_textarea_set_max_length(obj, 128);
                                            lv_textarea_set_placeholder_text(obj, "Enter Passwords");
                                            lv_textarea_set_one_line(obj, false);
                                            lv_textarea_set_password_mode(obj, true);
                                            lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLL_WITH_ARROW);
                                            lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                        {
                                            // Keyboard
                                            lv_obj_t *obj = lv_keyboard_create(parent_obj);
                                            objects.keyboard = obj;
                                            lv_obj_set_pos(obj, -12, 68);
                                            lv_obj_set_size(obj, 449, 145);
                                            lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                {
                    // Pag3
                    lv_obj_t *obj = lv_tabview_add_tab(parent_obj, "AIoT Transitorios");
                    objects.pag3 = obj;
                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICKABLE|LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_GESTURE_BUBBLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
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
                                    lv_obj_set_pos(obj, LV_PCT(2), 2);
                                    lv_obj_set_size(obj, LV_PCT(96), LV_PCT(15));
                                    lv_obj_clear_flag(obj, LV_OBJ_FLAG_CLICK_FOCUSABLE|LV_OBJ_FLAG_PRESS_LOCK|LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW|LV_OBJ_FLAG_SNAPPABLE);
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
                                            lv_obj_set_pos(obj, -5, -11);
                                            lv_obj_set_size(obj, LV_PCT(45), 30);
                                            lv_obj_add_event_cb(obj, event_handler_cb_main2_bt_conectar_wifi_2, LV_EVENT_ALL, flowState);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 28, -3);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "Conectar WiFi");
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                            }
                                        }
                                        {
                                            // Bt_Desconectar_WiFi_2
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_desconectar_wi_fi_2 = obj;
                                            lv_obj_set_pos(obj, 236, -11);
                                            lv_obj_set_size(obj, LV_PCT(45), 30);
                                            lv_obj_add_event_cb(obj, event_handler_cb_main2_bt_desconectar_wi_fi_2, LV_EVENT_ALL, flowState);
                                            {
                                                lv_obj_t *parent_obj = obj;
                                                {
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    lv_obj_set_pos(obj, 15, -3);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "Desconectar WiFi");
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                            }
                                        }
                                        {
                                            // Bt_Conectado_2
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_conectado_2 = obj;
                                            lv_obj_set_pos(obj, 196, -12);
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
                                    lv_obj_set_pos(obj, LV_PCT(2), 49);
                                    lv_obj_set_size(obj, LV_PCT(96), LV_PCT(81));
                                    lv_obj_set_style_bg_color(obj, lv_color_hex(0xffc8c8c8), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_color(obj, lv_color_hex(0xff000000), LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_border_width(obj, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    lv_obj_set_style_arc_width(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
                                    {
                                        lv_obj_t *parent_obj = obj;
                                        {
                                            // ContainerLabel
                                            lv_obj_t *obj = lv_obj_create(parent_obj);
                                            objects.container_label = obj;
                                            lv_obj_set_pos(obj, -16, -18);
                                            lv_obj_set_size(obj, 130, 196);
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
                                                    // Label_Red_WiFi_SSID
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    objects.label_red_wi_fi_ssid = obj;
                                                    lv_obj_set_pos(obj, LV_PCT(5), LV_PCT(15));
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "Red WiFi (SSID).:");
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                                {
                                                    // Label_Direccion_IP
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    objects.label_direccion_ip = obj;
                                                    lv_obj_set_pos(obj, LV_PCT(5), LV_PCT(35));
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "Direccion IP.:");
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                                {
                                                    // Label_Direccion_DNS
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    objects.label_direccion_dns = obj;
                                                    lv_obj_set_pos(obj, 5, LV_PCT(55));
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "Direccion DNS.:");
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                                {
                                                    // Label_Direccion_MAC
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    objects.label_direccion_mac = obj;
                                                    lv_obj_set_pos(obj, LV_PCT(5), LV_PCT(75));
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "Direccion MAC.:");
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                            }
                                        }
                                        {
                                            // ContainerResultados
                                            lv_obj_t *obj = lv_obj_create(parent_obj);
                                            objects.container_resultados = obj;
                                            lv_obj_set_pos(obj, 114, -18);
                                            lv_obj_set_size(obj, 328, 196);
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
                                                    // ui_LabSSID
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    objects.ui_lab_ssid = obj;
                                                    lv_obj_set_pos(obj, LV_PCT(5), LV_PCT(15));
                                                    lv_obj_set_size(obj, 295, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "Nombre WiFi (SSID).");
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                                {
                                                    // ui_LabIP
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    objects.ui_lab_ip = obj;
                                                    lv_obj_set_pos(obj, LV_PCT(5), LV_PCT(35));
                                                    lv_obj_set_size(obj, 140, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "xx.xx.xx.xx");
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                                {
                                                    // ui_LabMAC
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    objects.ui_lab_mac = obj;
                                                    lv_obj_set_pos(obj, LV_PCT(5), LV_PCT(55));
                                                    lv_obj_set_size(obj, 140, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "xx:xx:xx:xx:xx:xx");
                                                    lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                                {
                                                    // ui_LabDNS
                                                    lv_obj_t *obj = lv_label_create(parent_obj);
                                                    objects.ui_lab_dns = obj;
                                                    lv_obj_set_pos(obj, LV_PCT(5), LV_PCT(75));
                                                    lv_obj_set_size(obj, 140, LV_SIZE_CONTENT);
                                                    lv_label_set_text(obj, "xx.xx.xx.xx");
                                                    lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                    lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
                                                }
                                                {
                                                    lv_obj_t *obj = lv_img_create(parent_obj);
                                                    lv_obj_set_pos(obj, 217, 43);
                                                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                                                    lv_img_set_src(obj, &img_ud_fjd_c);
                                                }
                                            }
                                        }
                                        {
                                            // Bt_DHMS_2
                                            lv_obj_t *obj = lv_btn_create(parent_obj);
                                            objects.bt_dhms_2 = obj;
                                            lv_obj_set_pos(obj, -8, 178);
                                            lv_obj_set_size(obj, 200, 30);
                                            lv_obj_add_event_cb(obj, event_handler_cb_main2_bt_dhms_2, LV_EVENT_ALL, flowState);
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
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    lv_keyboard_set_textarea(objects.keyboard, objects.text_area_password);
}

void tick_screen_main2() {
    void *flowState = getFlowState(0, 1);
}


void create_screens() {
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_main1();
    create_screen_main2();
}

typedef void (*tick_screen_func_t)();

tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_main1,
    tick_screen_main2,
};

void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
