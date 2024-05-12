'''
pip install mpi4py
'''
from mpi4py import MPI

def main():
    # Initialize MPI
    comm = MPI.COMM_WORLD
    rank = comm.Get_rank()
    size = comm.Get_size()

    # Perform different tasks based on the rank
    if rank == 0:
        # Master process
        data = {'message': 'Hello from Master!'}
        # Send data to other processes
        for i in range(1, size):
            comm.send(data, dest=i, tag=0)
        print("Master sent data to other processes.")
    else:
        # Worker processes
        # Receive data from master
        data = comm.recv(source=0, tag=0)
        print(f"Worker {rank} received data:", data['message'])

if __name__ == "__main__":
    main()
