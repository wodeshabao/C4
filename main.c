#include <stdio.h>

struct lxd
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};

int main()
{

    int index = 0;
    struct lxd arr[100];
    printf("小学生成绩管理系统\n");

    while (1)
    {
        printf("1---添加学生成绩\n");
        printf("2---删除学生成绩\n");
        printf("3---显示学生成绩\n");
        printf("4---业务1：所有总分不及格的学生（小于180）\n");
        printf("5---业务2：每一科都不及格的学生\n");
        printf("6---业务3：显示总分最高的学生\n");
        printf("7---业务4：显示平均分最高\n");
        printf("8---退出\n");

        printf("请选择：\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入学生姓名：\n");
            scanf("%s", arr[index].name);

            printf("请输入学生的语文成绩：\n");
            scanf("%d", &(arr[index].yuwen));

            printf("请输入学生的数学成绩：\n");
            scanf("%d", &(arr[index].shuxue));

            printf("请输入学生的英语成绩：\n");
            scanf("%d", &(arr[index].yingyu));

            index++;

            printf("添加成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
        }
        if (code == 3)
        {

            if (index > 0)
            {
                for (int i = 0; i < index; i++)
                {
                    printf("%d同学的语文成绩为：%d,数学成绩为：%d,英语成绩为：%d\n", i + 1, arr[i].yuwen, arr[i].shuxue, arr[i].yingyu);
                }
                printf("点击回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                printf("系统错误，无学生成绩，点击回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
        }
        if (code == 6)
        {
        }
        if (code == 7)
        {
        }
        if (code == 8)
        {
            printf("程序结束\n");
            break;
        }
    }

    return 0;
}