'''
   mpirun -np 4 python hello_world.py
'''
from mpi4py import MPI

comm = MPI.COMM_WORLD
rank = comm.Get_rank()
size = comm.Get_size()

print("Hello world from process", rank, "of", size)