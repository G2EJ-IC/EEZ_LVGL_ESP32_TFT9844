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
#include "actions_msgbox.h"

#if LV_USE_MSGBOX && LV_BUILD_EXAMPLES

static void event_cb(lv_event_t * e)
{
    lv_obj_t * obj = lv_event_get_current_target(e);
    LV_LOG_USER("Button %s clicked", lv_msgbox_get_active_btn_text(obj));
}

void lv_example_msgbox_1(int counter)
{
    static const char * btns[] = {"Aceptar", "Cancelar", NULL};
    std::string counter2 = "Pagina Uno (.::" + std::to_string(counter) + "::.)";
	const char *counter3 = counter2.c_str();

    lv_obj_t * mbox1 = lv_msgbox_create(NULL, "Hello - G2EJ-IC", counter3, btns, true);
    lv_obj_add_event_cb(mbox1, event_cb, LV_EVENT_VALUE_CHANGED, NULL);
    lv_obj_center(mbox1);


    lv_msgbox_get_title(mbox1);
    lv_msgbox_get_close_btn(mbox1);
    lv_msgbox_get_text(mbox1);
    lv_msgbox_get_btns(mbox1);

    lv_msgbox_get_active_btn_text(mbox1);

    Serial << "\nMBox.: (" << lv_msgbox_get_active_btn_text(mbox1) << ").\n\n";

    


}

#endif