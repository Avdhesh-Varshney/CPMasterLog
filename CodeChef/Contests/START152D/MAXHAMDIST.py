def hamming_distance(s1, s2):
    return sum(1 for a, b in zip(s1, s2) if a != b)

def maximize_hamming_distance():
    T = int(input())
    
    for _ in range(T):
        N, M = map(int, input().split())
        strings = [list(input().strip()) for _ in range(M)]
        
        for i in range(N):
            count0 = 0
            count1 = 0
            
            for j in range(M):
                if strings[j][i] == '0':
                    count0 += 1
                elif strings[j][i] == '1':
                    count1 += 1
            
            for j in range(M):
                if strings[j][i] == '?':
                    if count0 <= count1:
                        strings[j][i] = '0'
                        count0 += 1
                    else:
                        strings[j][i] = '1'
                        count1 += 1
        
        total_hamming_distance = 0
        for i in range(N):
            count0 = 0
            count1 = 0
            for j in range(M):
                if strings[j][i] == '0':
                    count0 += 1
                else:
                    count1 += 1
            
            total_hamming_distance += count0 * count1
        
        print(total_hamming_distance)

maximize_hamming_distance()