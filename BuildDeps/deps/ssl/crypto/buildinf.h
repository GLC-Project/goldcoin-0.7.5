#ifndef MK1MF_BUILD
    /* auto-generated by util/mkbuildinf.pl for crypto/cversion.c */
    #define CFLAGS cflags
    /*
     * Generate CFLAGS as an array of individual characters. This is a
     * workaround for the situation where CFLAGS gets too long for a C90 string
     * literal
     */
    static const char cflags[] = {
        'c','o','m','p','i','l','e','r',':',' ','g','c','c','\0'
    };
    #define PLATFORM "platform: -I."
    #define DATE "built on: Wed May  6 02:24:56 2015"
#endif
