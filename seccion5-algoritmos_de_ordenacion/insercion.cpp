#include <iostream>
#include <ctime>

using namespace std;

void insercionSort() {

    unsigned t0,t1;
    t0 = clock();

    int v[] = {376, 474, 692, 803, 873, 587, 240, 49, 870, 369, 740, 884, 57, 99, 720, 778, 733, 133, 686, 265, 204, 246, 377, 912, 477, 961, 222, 347, 664, 311, 334, 702, 428, 89, 731, 285, 392, 53, 153, 341, 983, 360, 989, 688, 480, 311, 134, 598, 23, 373, 15, 289, 572, 611, 67, 493, 324, 942, 480, 542, 23, 823, 380, 204, 619, 173, 398, 940, 844, 363, 332, 987, 580, 353, 542, 670, 53, 924, 212, 471, 101, 35, 616, 414, 556, 805, 968, 596, 948, 779, 711, 84, 781, 309, 828, 838, 364, 769, 699, 89, 418, 321, 862, 968, 27, 279, 481, 901, 372, 54, 30, 426, 699, 353, 482, 355, 753, 82, 84, 70, 812, 743, 953, 8, 43, 525, 724, 4, 887, 906, 94, 188, 414, 907, 908, 85, 819, 808, 781, 756, 40, 226, 909, 254, 324, 577, 808, 671, 476, 352, 498, 37, 392, 262, 992, 562, 784, 802, 760, 873, 618, 499, 845, 280, 860, 487, 171, 171, 310, 20, 170, 859, 87, 758, 543, 7, 253, 872, 742, 332, 864, 600, 675, 446, 300, 35, 303, 791, 577, 864, 470, 53, 962, 108, 660, 509, 992, 511, 152, 482, 130, 277, 405, 720, 909, 222, 810, 826, 619, 218, 732, 216, 546, 113, 84, 934, 865, 135, 787, 432, 889, 408, 404, 333, 705, 744, 738, 390, 104, 259, 978, 316, 444, 870, 702, 789, 358, 442, 631, 94, 609, 208, 803, 87, 951, 398, 647, 53, 731, 500, 594, 455, 148, 980, 733, 756, 963, 553, 497, 12, 479, 470, 792, 181, 409, 802, 8, 646, 34, 110, 848, 809, 509, 687, 930, 263, 55, 662, 836, 89, 892, 21, 119, 475, 456, 703, 52, 395, 711, 695, 210, 993, 271, 501, 984, 184, 839, 738, 677, 408, 135, 637, 591, 127, 792, 647, 196, 146, 15, 60, 870, 615, 393, 255, 88, 98, 369, 683, 747, 999, 933, 67, 771, 894, 767, 536, 595, 18, 332, 572, 814, 874, 120, 755, 405, 434, 548, 886, 97, 224, 937, 874, 720, 853, 172, 971, 983, 816, 600, 822, 690, 907, 631, 432, 209, 331, 812, 168, 398, 259, 384, 932, 726, 535, 707, 712, 89, 993, 265, 545, 23, 43, 123, 422, 530, 845, 456, 214, 518, 829, 77, 684, 723, 307, 847, 785, 656, 957, 474, 925, 666, 232, 720, 196, 414, 462, 229, 154, 57, 100, 124, 178, 727, 545, 434, 322, 870, 196, 920, 707, 819, 31, 70, 227, 848, 458, 836, 238, 56, 344, 85, 913, 991, 679, 867, 788, 634, 481, 487, 690, 191, 736, 50, 20, 352, 951, 223, 55, 498, 602, 883, 198, 997, 394, 543, 416, 40, 575, 13, 505, 474, 123, 820, 318, 69, 708, 266, 996, 682, 643, 352, 248, 460, 42, 759, 366, 11, 404, 34, 557, 438, 115, 702, 88, 604, 382, 904, 13, 692, 431, 973, 15, 378, 261, 363, 87, 552, 102, 206, 143, 903, 932, 458, 29, 957, 944, 299, 41, 126, 476, 537};
    int size = sizeof(v)/sizeof(*v);

 
    int aux;

    cout << endl;
    for (int i = 0; i < size; i++) cout << v[i] << " ";

    for (int i = 1; i < size; i++){
        aux = v[i];
        int j;
        for (j = i-1; j>=0 && v[j]>aux ;j--) {
            v[j+1] = v[j];
        }
        v[j+1] = aux;

    }
    
    cout << endl;
    for (int i = 0; i < size; i++) cout << v[i] << " ";

    t1 = clock();

    cout << "TIEMPO: " << double(t1 - t0) / CLOCKS_PER_SEC;
}

int main(){
    insercionSort();
}