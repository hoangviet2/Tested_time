import UIKit

var currentYear = 2021
var lastYear = 1905
var resultYears = [Int] ()
for i in (lastYear...currentYear) {
    if i % 10 == 6 && i % 12 == 8 {
        resultYears.append(i)
    }
}
for i in resultYears{
    print(i)
}
