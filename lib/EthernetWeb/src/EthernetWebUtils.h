#ifndef ETHERNETWEBUTILS_H
#define ETHERNETWEBUTILS_H


#include <Ethernet.h>


class WebPage;
class WebServer;
class ApiServer;


class EthernetWebUtils {

    public:

    static void serveWebPage( WebPage webPage , EthernetClient client );

    static int split_string_to_array_get_size( String input , char* delimiter ) ;

    static String *split_string_to_array( String input , char* delimiter , int* parametersCount );

    static String (*split_2d_string_to_array( String* input , char* delimiter , int parametersCount ))[2];

};


#endif