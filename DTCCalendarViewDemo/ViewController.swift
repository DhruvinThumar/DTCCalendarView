//
//  ViewController.swift
//  DTCCalendarViewDemo
//
//  Created by Apple on 14/10/22.
//

import UIKit
import DTCCalendar

class ViewController: UIViewController, DTCalendarActionDelegate {

    @IBOutlet weak var selectedDatelbl: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    @IBAction func calendarTapped(_ sender: Any) {
        
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
    }
    
    @IBAction func arabicCalendarTapped(_ sender: Any) {
        
        let cView = OpenCalendarView.init(frame: self.view.frame)
        cView.cLocale = "ar"
        cView.dtCalendarActionDelegate = self
       // cView.startDate = self.getDate(dateS: "2021-01-01")
      //  cView.endDate = Date()
        cView.allowsMultipleSelection = false
        cView.eventDateArray = [self.getDate(dateS: "2022-10-12"), self.getDate(dateS: "2022-10-13"), self.getDate(dateS: "2022-10-11"), self.getDate(dateS: "2022-9-12")]
        cView.themeColor = UIColor.systemGreen
        cView.dotColor = UIColor.systemGreen
        cView.setUpView()
        
        self.view.addSubview(cView)
    }
    
    func cancelTapped() {
        print("Cancel Tapped")
    }
    
    func okTapped(selectedDate: Date?, selectedDates: [Date]?) {
        let dateFormatter = DateFormatter()
        dateFormatter.timeZone = TimeZone.init(secondsFromGMT: 0)
        dateFormatter.dateFormat = "yyyy-MM-dd"
        
        self.selectedDatelbl.text = dateFormatter.string(from: selectedDate!)
        
        print(selectedDate ?? "")
        print(selectedDates ?? [""])
    }
    
    func getDate(dateS:String) -> Date{
        let dateFormatter = DateFormatter()
        dateFormatter.timeZone = TimeZone.init(secondsFromGMT: 0)
        dateFormatter.dateFormat = "yyyy-MM-dd"
        
        return dateFormatter.date(from: dateS)!
    }
    

}

