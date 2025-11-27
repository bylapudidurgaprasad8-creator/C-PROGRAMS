#include <stdio.h>
#include<mpi.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int id, np, processor_name_len;
    int j;
    int dest;
    int tag = 0;
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    char message[100];
    MPI_Status status;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &id);
    MPI_Comm_size(MPI_COMM_WORLD, &np);
    MPI_Get_processor_name(processor_name, &processor_name_len);

    sprintf(message, 
        "Process %03d out of %03d running on processor %4s", 
        id, np, processor_name);

    if (id == 0)
    {
        printf("%s\n", message);

        for (j = 1; j < np; j++)
        {
            MPI_Recv(message, 100, MPI_CHAR, j, tag, MPI_COMM_WORLD, &status);
            printf("%s\n", message);
        }
    }
    else
    {
        dest = 0;
        MPI_Send(message, strlen(message)+1, MPI_CHAR, dest, tag, MPI_COMM_WORLD);
    }

    MPI_Finalize();
    return 0;
}
