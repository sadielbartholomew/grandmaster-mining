#include <iostream>


const std::string ascii_logo =
R"(
        GGGGGGGGGGGGG      i      MMMMMMMM               MMMMMMMM
     GGG::::::::::::G    -=Q=-    M:::::::M             M:::::::M
   GG:::::::::::::::G     }Y{     M::::::::M           M::::::::M
  G:::::GGGGGGGG::::G    )GGG(    M:::::::::M         M:::::::::M
 G:::::G       GGGGGG   {*M*M*}   M::::::::::M       M::::::::::M
G:::::G                  \___/    M:::::::::::M     M:::::::::::M
G:::::G                   )_(     M:::::::M::::M   M::::M:::::::M
G:::::G    GGGGGGGGGG    /   \    M::::::M M::::M M::::M M::::::M
G:::::G    G::::::::G    }___{    M::::::M  M::::M::::M  M::::::M
G:::::G    GGGGG::::G     {_}     M::::::M   M:::::::M   M::::::M
G:::::G        G::::G    {   }    M::::::M    M:::::M    M::::::M
 G:::::G       G::::G    )-=-(    M::::::M     MMMMM     M::::::M
  G:::::GGGGGGGG::::G   /_____\   M::::::M               M::::::M
   GG:::::::::::::::G  (_______)  M::::::M               M::::::M
     GGG::::::GGG:::G  )-M-M-M-(  M::::::M               M::::::M
        GGGGGG   GGGG  {_______}  MMMMMMMM               MMMMMMMM

        G  R  A  N  D  M  A  S  T  E  R          M  I  N  I  N  G
)";


int main ()
{
  using namespace std;

  cout << ascii_logo;
  // Extra spacing at start to align harmoniously with the logo
  cout << "        | grandmaster-mining library, Sadie Bartholomew (2020+) |";
  cout << endl;

  return 0;
}
