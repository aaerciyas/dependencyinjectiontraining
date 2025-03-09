## English

**Dependency Injection (DI)** is a software development technique in which a class’s dependencies are provided externally rather than being created within the class itself. This approach makes software more flexible, testable, and maintainable.

### **Why Use It?**

• **Loose Coupling**: Classes are not tightly dependent on each other, making modifications easier.

• **Testability**: Enables the use of mock objects for unit testing.

• **Reusability**: Reduces code duplication and makes dependencies reusable.

• **Maintainability**: Adding or modifying dependencies requires less effort.

### **How Does It Work?**

Dependency injection is typically implemented in three ways:

1. **Constructor Injection**

Dependencies are passed as parameters to the class constructor.

2. **Setter Injection**

Dependencies are set through a setter method after the class is instantiated.

3. **Interface/Property Injection**

Dependencies are assigned directly to a property or implemented through an interface.

**Advantages**

• Reduces code duplication

• Improves code readability and clarity

• Enhances modularity and facilitates test writing

**Disadvantages**

• May introduce unnecessary complexity in small projects

• Can have a steep learning curve

• Errors might appear at runtime, especially in dynamically typed languages

**Dependency Injection in C++**

Using **Dependency Injection (DI)** in C++ is particularly beneficial for **unit testing**, as it allows for injecting mock or stub versions of dependencies, making tests more isolated and reliable.

## Turkish

**Dependency Injection (DI)**, yazılım geliştirmede bir sınıfın ihtiyaç duyduğu bağımlılıkların (dependency), doğrudan sınıfın içinde oluşturulmak yerine dışarıdan sağlanması yöntemidir. Bu yaklaşım, yazılımın daha esnek, test edilebilir ve sürdürülebilir olmasını sağlar.

### **Neden Kullanılır?**

• **Gevşek bağlılık (Loose coupling):** Sınıflar birbirine sıkı sıkıya bağlı olmadığından, değişiklik yapmak daha kolaydır.

• **Test edilebilirlik:** Özellikle birim testlerinde, sahte (mock) nesneleri kolayca enjekte ederek testler yapılabilir.

• **Yeniden kullanılabilirlik:** Kod tekrarını azaltır ve bağımlılıklar kolayca yeniden kullanılabilir.

• **Bakım kolaylığı:** Yeni bağımlılık eklemek veya mevcut bağımlılığı değiştirmek daha az maliyetlidir.

### **Nasıl Çalışır?**

Bağımlılık enjeksiyonu genelde üç yolla yapılır:

1.**Constructor Injection (Kurucu Metot ile Enjeksiyon)**

Bağımlılıklar, sınıfın kurucu metoduna parametre olarak geçirilir.

2.**Setter Injection (Ayar Metodu ile Enjeksiyon)**

Bağımlılık, sınıf oluşturulduktan sonra bir setter metodu aracılığıyla sağlanır.

3.**Interface/Property Injection (Arayüz ya da Özellik ile Enjeksiyon)**

Bağımlılık, doğrudan sınıfın bir özelliği (property) olarak atanır.

**Avantajları:**

•Kod tekrarını azaltır.

•Daha temiz ve okunabilir kod sağlar.

•Daha iyi modülerlik ve kolay test yazımı sağlar.

**Dezavantajları:**

•Küçük projelerde gereksiz karmaşıklık yaratabilir.

•Başlangıçta öğrenmesi ve uygulaması zor olabilir.

•Hatalar, çalışma zamanında fark edilebilir (özellikle dinamik dillerde).

C++’ta **Dependency Injection (DI)** kullanımı, özellikle **unit test** yazarken oldukça faydalıdır çünkü bağımlılıkların _mock_ veya _stub_ versiyonlarını kolayca sağlayarak testleri izole etmeyi mümkün kılar.
