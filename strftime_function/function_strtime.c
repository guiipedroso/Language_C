  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>

  int main()
    {
    time_t timee;
    struct tm *show_time;
    char texto[95];
    time(&timee);
    show_time = localtime(&timee);
    strftime(texto, 95, "Hour now %I:%M%p.", show_time);
    puts(texto);
    strftime(texto, 95, "Date: %A, %d/%b/%Y", show_time);
    puts(texto);

    return(0);
    }
