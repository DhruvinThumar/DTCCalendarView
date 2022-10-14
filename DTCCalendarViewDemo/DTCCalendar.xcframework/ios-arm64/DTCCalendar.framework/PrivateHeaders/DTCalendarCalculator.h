

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

struct DTCalendarCoordinate {
    NSInteger row;
    NSInteger column;
};
typedef struct DTCalendarCoordinate DTCalendarCoordinate;

@interface DTCalendarCalculator : NSObject

@property (weak  , nonatomic) DTCalendar *calendar;

@property (readonly, nonatomic) NSInteger numberOfSections;

- (instancetype)initWithCalendar:(DTCalendar *)calendar;

- (NSDate *)safeDateForDate:(NSDate *)date;

- (NSDate *)dateForIndexPath:(NSIndexPath *)indexPath;
- (NSDate *)dateForIndexPath:(NSIndexPath *)indexPath scope:(DTCalendarScope)scope;
- (NSIndexPath *)indexPathForDate:(NSDate *)date;
- (NSIndexPath *)indexPathForDate:(NSDate *)date scope:(DTCalendarScope)scope;
- (NSIndexPath *)indexPathForDate:(NSDate *)date atMonthPosition:(DTCalendarMonthPosition)position;
- (NSIndexPath *)indexPathForDate:(NSDate *)date atMonthPosition:(DTCalendarMonthPosition)position scope:(DTCalendarScope)scope;

- (NSDate *)pageForSection:(NSInteger)section;
- (NSDate *)weekForSection:(NSInteger)section;
- (NSDate *)monthForSection:(NSInteger)section;
- (NSDate *)monthHeadForSection:(NSInteger)section;

- (NSInteger)numberOfHeadPlaceholdersForMonth:(NSDate *)month;
- (NSInteger)numberOfRowsInMonth:(NSDate *)month;
- (NSInteger)numberOfRowsInSection:(NSInteger)section;

- (DTCalendarMonthPosition)monthPositionForIndexPath:(NSIndexPath *)indexPath;
- (DTCalendarCoordinate)coordinateForIndexPath:(NSIndexPath *)indexPath;

- (void)reloadSections;

@end
