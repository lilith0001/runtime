program list_sum

    character(len=10) :: arg
    integer :: n

    ! Read first command line argument to arg
    call get_command_argument(1, arg)

    ! Convert arg to integer and store in n
    read(arg, '(i10)') n
    
    call sum_lists(n)

end program list_sum

! Subroutine to generate and sum list
subroutine sum_lists(n)

    integer, intent(in) :: n
    integer(kind = 8) :: list(n), s
    integer(kind = 8), volatile :: x
    real :: start, finish
    character(len=10) :: str

    ! Generate list
    do i = 1, n
        list(i) = i
    end do

    call cpu_time(start)

    ! Sum all elements of a list
    s = 0
    do i = 1, n
        s = s + list(i)
    end do

    call cpu_time(finish)

    x = s ! Prevent compiler from optimizing out the loop

    ! Print execution time in microseconds
    write(str, '(i10)') int((finish - start) * 1000000)
    write(*,'(a)') adjustl(str)

end subroutine sum_lists
