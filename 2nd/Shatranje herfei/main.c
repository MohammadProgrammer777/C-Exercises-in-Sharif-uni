#include <stdio.h>
#include <stdlib.h>

int main()
{
    //در دستورات ورودی و خروجی، میتوان یکجا همه اطلاعات را وارد کرد یا اینکه میتوان در هر خط جداگانه دستوری را انجام داد.
    //Declaring variables
    int king, queen, rook, bishop, knight, pawn;
    int max_king=1, max_queen=1, max_rook=2, max_bishop=2, max_knight=2, max_pawn=8;

    //Getting inputs
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);

    //Logic and output
    printf("%d %d %d %d %d %d", (max_king-king), (max_queen-queen), (max_rook-rook), (max_bishop-bishop), (max_knight-knight), (max_pawn-pawn));

    return 0;
}
