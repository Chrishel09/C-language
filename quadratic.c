// to compute the roots of the quadratic equation

#include<stdio.h>
#include<math.h>
int main(){

    double a=0.0, b=0.0, c=0.0, disc=0.0, root1=0.0, root2=0.0, rp=0.0, ip=0.0;
    printf("enter the values of a b c:");
    scanf("%lf %lf %lf",&a, &b, &c);

    disc=(b*b-4*a*c);
    if(disc>0)
    {
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("roots are real and distinct \n");
        printf("root1=%.2lf \n root2=%.2lf \n",root1, root2);
    }
    else if(disc==0)
    {
        root1=root2=-b/(2*a);
        printf("roots are real and equal \n");
        printf("root1=root2=%.2lf",root2);
    }
    else
    {
        rp=-b/(2*a);
        ip=sqrt(fabs(disc))/(2*a);
        printf("roots are complex \n");
        printf("root1=%.2lf+%.2lfi \n",rp, ip);
        printf("root1=%.2lf-%.2lfi \n",rp, ip);
    }
    return 0;

}