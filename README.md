# DTCCalendarView

Android Style MaterialDatepicker.
Locale Support.

## Screenshots

<img width="1333" alt="Screenshot 2022-10-14 at 3 33 29 PM" src="https://user-images.githubusercontent.com/30721404/195820749-5e571a11-7c5d-40fb-a14f-70ec7514a25a.png">


## Requirements
Min iOS 13.0, Swift 5.0, XCode 13.0 

## Installation

Simply add, 
#### DTCCalendar.xcframework in your Project.

<img width="1734" alt="Screenshot 2022-10-14 at 3 40 09 PM" src="https://user-images.githubusercontent.com/30721404/195821955-a47ad6ae-f3c3-44b6-81cc-b01163219625.png">

Make sure it is 'Embed & Sign'.


## Setup

```
DTCalendarActionDelegate

func cancelTapped()
func okTapped(selectedDate: Date?, selectedDates: [Date]?)
```

```
let cView = OpenCalendarView.init(frame: self.view.frame)
cView.cLocale = "en"
cView.dtCalendarActionDelegate = self
cView.startDate = self.getDate(dateS: "1992-01-01")
cView.endDate = Date()
cView.allowsMultipleSelection = false
cView.eventDateArray = [self.getDate(dateS: "2022-10-12"), self.getDate(dateS: "2022-10-13"), self.getDate(dateS: "2022-10-11"), self.getDate(dateS: "2022-9-12")]
cView.themeColor = UIColor.systemGreen
cView.dotColor = UIColor.systemGreen
cView.setUpView()
self.view.addSubview(cView)
```

## License
MIT license
