#include <iostream>
using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int time_one_oven = ((n + k - 1) / k) * t;

    // الوقت عند استخدام فرنين: نبني الفرن الثاني أثناء عمل الأول
    // نحسب عدد الكعكات المنتجة خلال بناء الفرن الثاني
    int cakes_during_build = (d / t) * k;
    if (cakes_during_build >= n) {
        cout << "NO";
        return 0;
    }

    // بعد d، يكون الفرن الثاني جاهزاً
    // ننتج بسرعة مضاعفة
    // طريقة سهلة: نرى إذا كان بإمكاننا إنهاء الطلب قبل time_one_oven باستخدام فرنين
    // بما أن الفرن الثاني يبدأ عند d، فإن أول دفعة منه تكون عند d + t
    // لكن يمكن استخدام طريقة ذكية:

    // نحتاج معرفة: هل يمكن إنهاء الطلب خلال time_one_oven - 1 باستخدام فرنين؟
    // لأن القيمة الصحيحة للفرن الثاني يجب أن تكون أقل من time_one_oven
    
    // حساب الوقت مع فرنين:
    int cakes_left = n - cakes_during_build;
    // بعد d، لدينا فرنان، كل دفعة تنتج 2k كعكة
    int batches_needed_after = (cakes_left + 2*k - 1) / (2*k);
    int total_time_two = d + batches_needed_after * t;

    if (total_time_two < time_one_oven) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}