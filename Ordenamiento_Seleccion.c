void selection_sort(int *vector, int taille)
{
     int actual, mas_pequeno, j, temp;
 
     for (actual = 0; actual < taille - 1; actual++)
     {
         mas_pequeno = actual;
         for (j = actual 1; j < taille; j++)
              if (vector[j] < vector[mas_pequeno])
                  mas_pequeno = j;
          temp = vector[actual];
          vector[actual] = vector[mas_pequeno];
          vector[mas_pequeno] = temp;
     }
}
