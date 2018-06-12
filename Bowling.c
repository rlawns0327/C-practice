#include <stdio.h>

int main()
{
 char frame[11][2] = { 0 };
 int score[11] = { 0 };
 int sw = 0;

 for (int i = 1; i < 10; i++) {

  printf("%d번째 프레임 : ",i);

  scanf("%c", &frame[i][0]);

  if (frame[i][0] == 'X')
  {
   while (getchar() != '\n');
   frame[i][1] = 'X';
   frame[i][0] = '\0';
   sw += 2;
   continue;
  }

  else
  {
   while (getchar() != ' ');
   scanf(" %c", &frame[i][1]);
   while (getchar() != '\n');
   if (frame[i][1] == '/')
    sw += 1;
   else
   {
    score[i] +=score[i-1] + frame[i][0] - '0' + frame[i][1] - '0';
   }
  }

 }

}
}
}
}
}
}
}
