


def intcombs():
    user = int(input('Enter an integer: '))
    count = 0
    user1 = user
    if user1 > 20:
        user1 == 9
    for a in (range(100)):
        for b in (range(100)):
            if (a*8) + (b*7) > user:
                break
            for c in (range(100)):
                if (a*8) + (b*7) + (c*6) > user:
                    break
                for d in (range(100)):
                    if (a*8) + (b*7) + (c*6) + (d*3) > user:
                        break
                    for e in (range(100)):
                        if (a*8) + (b*7) + (c*6) + (d*3) + (e*2) > user:
                            break
                        elif (a*8) + (b*7) + (c*6) + (d*3) + (e*2) == user:
                            count += 1
                            print(f'TD3:{a} TD2:{b} TD:{c} FG:{d} SF:{e}')

    return count

print(intcombs())