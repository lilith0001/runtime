program matrix_multiplication

    character(len=10) :: arg
    integer :: n

    ! Read first command line argument to arg
    call get_command_argument(1, arg)

    ! Read first command line argument to arg
    read(arg, '(i10)') n
    
    call multiplicate_matrices(n)

end program matrix_multiplication

! Subroutime to generate and multiply two matrices
subroutine multiplicate_matrices(n)

    integer, intent(in) :: n
    integer, dimension(n, n) :: A, B, C
    integer :: s
    real :: start, finish
    character(len=10) :: str

    ! Fill matrices A and B
    do i = 1, n
        do j = 1, n
            A(i, j) = i + j
            B(i, j) = i + j
        end do
    end do

    call cpu_time(start)
    
    ! Multiply matrices A and B
    do i = 1, n
        do j = 1, n
            s = 0
            do k = 1, n
                 s = s + A(i, k) * B(k, j)
            end do
            C(i, j) = s
        end do
    end do

    call cpu_time(finish)

    ! Print execution time in microseconds
    write(str, '(i10)') int((finish - start) * 1000000)
    write(*,'(a)') adjustl(str)

end subroutine multiplicate_matrices
