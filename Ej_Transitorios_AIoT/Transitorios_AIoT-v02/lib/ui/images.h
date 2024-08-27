#ifndef EEZ_LVGL_UI_IMAGES_H
#define EEZ_LVGL_UI_IMAGES_H

#include <lvgl.h>

extern const lv_img_dsc_t img_aio_t;
extern const lv_img_dsc_t img_aio_t_235x157;
extern const lv_img_dsc_t img_ud_fjd_c;
extern const lv_img_dsc_t img_ud_fjd_c_058x077;

#ifndef EXT_IMG_DESC_T
#define EXT_IMG_DESC_T
typedef struct _ext_img_desc_t {
    const char *name;
    const lv_img_dsc_t *img_dsc;
} ext_img_desc_t;
#endif

extern const ext_img_desc_t images[4];


#endif /*EEZ_LVGL_UI_IMAGES_H*/