#include <Arduino.h>
/** 
* @brief : Función Similar a cout << de C++, Debe estar despues de #include <Arduino.h> para que funcione.
* @param : T.
* @return : obj.
*/
template<class T>
inline Print &operator <<(Print &obj, T arg) { 
    obj.print(arg); 
    return obj; 
}

#include "actions.h"
#include "screens.h"

int	counter;

extern void action_fn_pagina_inicial(lv_event_t * e)
{
	lv_label_set_text(objects.label_sub_pagina_ok, "Pagina Inicial \n(.:: Pagina 00 ::.)");
	lv_obj_clear_flag(objects.panel_sub_pagina_ok, LV_OBJ_FLAG_HIDDEN);
}

extern void action_fn_pagina_uno(lv_event_t * e)
{	
	lv_label_set_text(objects.label_sub_pagina_ok, "Pagina Uno \n(.:: Pagina 01 ::.)");
	lv_obj_clear_flag(objects.panel_sub_pagina_ok, LV_OBJ_FLAG_HIDDEN);
}

extern void action_fn_presionar_bt_ok(lv_event_t * e)
{
    lv_obj_add_flag(objects.panel_sub_pagina_ok, LV_OBJ_FLAG_HIDDEN);
}

extern void action_fn_plus(lv_event_t * e)
{
	lv_label_set_text(objects.label_counter, (const char*)(counter++));
	Serial << counter;
}

extern void action_fn_minus(lv_event_t * e)
{
	lv_label_set_text(objects.label_counter, (const char*)(counter--));
	Serial << counter;
}
