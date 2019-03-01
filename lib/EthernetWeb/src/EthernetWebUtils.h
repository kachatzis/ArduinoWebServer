#ifndef ETHERNETWEBUTILS_H
#define ETHERNETWEBUTILS_H



#include "WebPage.h"
// #include "EthernetWeb.h"
#include <Ethernet3.h>
#include "WebServer.h"
#include "ApiServer.h" 


/*// #define FOREACH_REQUEST_METHOD(REQUEST_METHOD)  \
//         REQUEST_METHOD(REQUEST_METHOD_GET)      \

// #define GENERATE_ENUM(ENUM) ENUM,
// #define GENERATE_STRING(STRING) #STRING,



// enum REQUEST_METHOD_ENUM {
//     FOREACH_REQUEST_METHOD(GENERATE_ENUM)
// };

// static const char *REQUEST_METHOD_STRING[] = {
//     FOREACH_REQUEST_METHOD(GENERATE_STRING)
// };*/


class EthernetWebUtils {

    public:

    static void serveWebPage( WebPage webPage , EthernetClient client );

    static int split_string_to_array_get_size( String input , char* delimiter ) ;

    static String *split_string_to_array( String input , char* delimiter , int* parametersCount );

    static String (*split_2d_string_to_array( String* input , char* delimiter , int parametersCount ))[2];

    // static void EthernetWebUtils::serveWebPage( WebPage webPage , EthernetClient client );

    // static int EthernetWebUtils::split_string_to_array_get_size( String input , char* delimiter ) ;

    // static String *EthernetWebUtils::split_string_to_array( String input , char* delimiter , int* parametersCount );

    // static String (*EthernetWebUtils::split_2d_string_to_array( String* input , char* delimiter , int parametersCount ))[2];
    
};


#endif