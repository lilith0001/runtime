program matrix_multiplication

    character(len=10) :: arg
    integer :: n

    call get_command_argument(1, arg)

    read(arg, '(i10)') n
    
    call multiplicate_matrices(n)

end program matrix_multiplication

subroutine multiplicate_matrices(n)

    integer, intent(in) :: n
    integer, dimension(n, n) :: A, B, C
    real :: start, finish
    character(len=10) :: str

    do i = 1, n
        do j = 1, n
            A(i, j) = i + j
            B(i, j) = i + j
        end do
    end do

    do i = 1, n
        do j = 1, n
            C(i, j) = 0
        end do
    end do

    call cpu_time(start)
    
    C = matmul(A, B)

    call cpu_time(finish)

    write(str, '(i10)') int((finish - start) * 1000000)
    write(*,'(a)') adjustl(str)

end subroutine multiplicate_matrices
