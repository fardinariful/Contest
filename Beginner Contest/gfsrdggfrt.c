#include <stdio.h>
#include <pthread.h>

 int glob_data = 5 ;

void *kidfunc(void *p) {

 printf ("Kid here. Global data was %d.\n", glob_data) ;
glob_data = 15 ;
 printf ("Kid Again. Global data was now %d.\n", glob_data) ;
}


main ( ) {
 pthread_t kid ;

 pthread_create (&kid, NULL, kidfunc, NULL) ;
 glob_data = 10 ;
 printf ("Parent here. Global data = %d\n", glob_data) ;

 pthread_join (kid, NULL) ;

 printf ("End of program. Global data = %d\n", glob_data) ;
}
