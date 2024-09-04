#include  "My_matriz.h"
void Mostrar__Matriz(int mat[][TAM_COL],int F,int C)
{
    int i,j;
    for(i=0;i<F;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
}
void Mostrar_Diagonal_Principal(int Mat[][TAM_COL],size_t FC )
{
    size_t I;
    for(I=0;I<FC;I++)
    {
        printf("%d \n",Mat[I][I]);
    }
}

void Mostrar_Diagonal_Secundaria(int Mat[][TAM_COL],size_t FC )
{
    size_t I;
    for(I=FC;I>0;I--)
    {
        printf("%d\n",Mat[I][I]);
    }
}

void Mostrar_Diagonal_Inferior(int Mat[][TAM_COL],size_t FC)
{
    size_t i,j;
    for(i=0;i<FC;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",Mat[i][j]);
        }
        printf("\n");
    }
}
void Mostrar_Diagonal_Superior(int Mat[][TAM_COL],size_t FC)
{
    size_t i,j;
    for(i=0;i<FC;i++)
    {
        for(j=0; j>i;j++)
        {
            printf("%d",Mat[i][j]);
        }
        printf("\n");
    }
}
void **Generar_Matriz(size_t Tam_Element,size_t Colum,size_t File)
{
    size_t j=0,k;
    void*i=malloc(File);
    if(i)
    {
        return NULL;
    }
    for(void**col=i;*col<i+sizeof(i);col++)
    {
        *col=malloc(Tam_Element*Colum);
        j++;
        if(*col)
        {
            for(k=0;k<j;k++)
            {
                free(col);
            }
        }
    }
}

int Multiplicar_Matriz( Mat_1[][TAM_COL],size_t F1,size_t C1, int Mat_2[][TAM_COL],size_t F2,size_t C2)
{
    if(C1!=F2)
    {
        return NULL:
    }
    int **mat=(int**)Generar_Matriz(,sizeof(int),F1,C2);

    size_t F,C,K:
    for(F=0;F<F1;F++)
    {
        for(C=0;C<C2;C++)
        {
            for(K=0;K<C2;K++)
            {
                mat[F][C]+=Mat_1[F][K]* Mat_2[K][C]
            }
        }
    }
    return mat;
}
void Matriz_Traspuesta(int Mat[][TAM_COL],size_t F, size_t C)
{
    size_t File,Colum;
    int aux;

    if(F==C)
    {
        for(File=0;File<F;File++)
        {
            for(Colum;Colum<C;Colum++)
            {
                if(File!=Colum)
                {
                    aux=Mat[File][Colum];
                    Mat[File][Colum]=Mat[Colum][File];
                    Mat[Colum][File]=aux;
                }
            }
        }
    }
    else
    {
       int **AuxMat=(int **)Generar_Matriz(sizeof(int),C,f);

       for(File=0;File<F;File++)
        {
            for(Colum;Colum<C;Colum++)
            {
                if(File!=Colum)
                {
                    auxMat[File][Colum]=Mat[Colum][File];//modificar
                }
            }
        }
    }
}

int Es_Identidad(int Mat[][TAM_COL],size_t F,size_t C)
{
    size_t File,Colum;
    for(File;File < F;File++)
    {
        for(Colum; Colum<C ;Colum++)
        {
            if(!(Mat[File][Colum]==0 || Mat[File][Colum]==1))
                return NULL;
        }
    }
}
void espiral(int Mat[][TAM_COL],size_t F,size_t C)
{
    while()
    {
        for()
        {

        }
        for()
        {

        }
        for()
        {

        }
        for()
        {

        }
    }
}
