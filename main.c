//#include <stdio.h>
//
//#define AC_BLACK "\x1b[30m"
//#define AC_RED "\x1b[31m"
//#define AC_GREEN "\x1b[32m"
//#define AC_YELLOW "\x1b[33m"
//#define AC_BLUE "\x1b[34m"
//#define AC_MAGENTA "\x1b[35m"
//#define AC_CYAN "\x1b[36m"
//#define AC_WHITE "\x1b[37m"
//#define AC_NORMAL "\x1b[m"
//#include <Windows.h>
//#include <cstdint>
//
//typedef void* (*fn_winproc_scenario_handler) (HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
//
//
////спеуиализированная функция для отображения int в winproc функции; winproc функции можут иметь разную сигнатуру,
////это повлияет на неализацию методов; возможно иная реализация типов ключей в теории
//
////https://gist.github.com/morew4rd/e42e1574cb82ba3c9df1ec2baebe9a85
//struct wc_map {
//    int func_cnt;
//    void* data;
//    const size_t elem_size;
//} wcmap_default = {0, NULL, sizeof(uint32_t)};
//
//typedef struct wc_map wcmap;
//
//boolean contains(struct wc_map* map, int key) {
//    char* data = (char*)map->data;
//    if (*(data + key) == NULL) return FALSE;
//    else return TRUE;
//}
//
//void* get(struct wc_map* map, int key) {
//    char* data = (char*)map->data;
//    return data[key];
//}
//
//boolean put(struct wc_map* map, int key, void* value) {
//    char* data = (char*)map->data;
//    //resize
//}
//
//void iterate(struct wc_map* map, void (*iterator)(VALUE_KEY)) {
//
//}
//
//int main()
//{
//    char* x = (char*)malloc(1);
//    
//   /* printf("Color test:\n");
//    printf("%sThis is red text\n", AC_RED);
//    printf("End test\n");*/
//
//    return 0;
//}

//#include "user_config.h"

#define FOOBAR_NAMESPACE_DISABLED 0
#define FOOBAR_NAMESPACE_ENABLED 1
#define FOOBAR_NAMESPACE FOOBAR_NAMESPACE_ENABLED
#define LOGGING_ENABLED 0
#define LOGGING_DISABLED 1
#define LOGGING LOGGING_DISABLED

#include "foobar.h"

void main() {
	mdlfoobar.bar_single_function();
}