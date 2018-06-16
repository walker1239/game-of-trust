#include "copycat.h"
#include "allcheat.h"
#include "allcoperate.h"
#include "grudger.h"
#include "detective.h"
#include "character.h"

int main() {
  copycat s1("Copycat");
  allcoperate s2("All coperate");
  allcheat s3("All cheat");
  grudger s4("Grudger");
  detective s5("Detective");
  character _players[5]={s1,s2,s3,s4,s5};
  character *player=new character[5];
  player=_players;
  int i;
  for (i=0;players[i-1]!=NULL;i++) {
    cout<<players[i].get_name()<<" VS ";
    int j;
    cout<<players[i+1].get_name()<<endl;
    for (j=i+1;players[j-1]!=NULL;j++) {
        cout<<players[j].get_name()<<endl;
      }
    }

  return 0;
}
