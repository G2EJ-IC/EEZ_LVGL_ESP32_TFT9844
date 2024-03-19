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

int counter;

extern void action_fn_pagina_1_uno(lv_event_t * e)
{
	lv_disp_load_scr(objects.main1);	// Mostrar página 1	
}

extern void action_fn_pagina_2_dos(lv_event_t * e)
{
	lv_disp_load_scr(objects.main2);	// Mostrar página 2
}

extern void action_fn_pagina_3_tres(lv_event_t * e)
{	
	lv_disp_load_scr(objects.main3);	// Mostrar página 3
}

extern void action_fn_pagina_1_ok(lv_event_t * e)
{
	lv_example_msgbox_1(counter);
}

extern void action_fn_pagina_2_ok(lv_event_t * e)
{

}

extern void action_fn_pagina_3_ok(lv_event_t * e)
{

}

extern void action_fn_plus(lv_event_t * e)
{
	int counter2 = ++counter;
	const char *counter3 = std::to_string(counter2).c_str();
	lv_label_set_text(objects.label_counter, counter3);
	Serial << "\nEl contador va en.: (" << counter << ").\n\n";
}

extern void action_fn_minus(lv_event_t * e)
{
	int counter2 = --counter;
	const char *counter3 = std::to_string(counter2).c_str();
	lv_label_set_text(objects.label_counter, counter3);
	Serial << "\nEl contador va en.: (" << counter << ").\n\n";
}