program fibonacci
    
    character(len=10) :: arg, str
    integer :: n
    integer(kind = 8) :: a, b, tmp
    integer(kind = 8), volatile :: x
    real :: start, finish

    ! Read first command line argument to arg
    call get_command_argument(1, arg)

    ! Convert arg to integer and store in n
    read(arg, '(i10)') n

    call cpu_time(start)

    ! Get n-th Fibonacci numbeber
    do i = 1, n - 1
        tmp = a
        a = b
        b = tmp + a
    end do

    call cpu_time(finish)

    x = b ! Prevent compiler from optimizing out the loop
    
    ! Print execution time in microseconds
    write(str, '(i10)') int((finish - start) * 1000000)
    write(*,'(a)') adjustl(str)

end program fibonacci
