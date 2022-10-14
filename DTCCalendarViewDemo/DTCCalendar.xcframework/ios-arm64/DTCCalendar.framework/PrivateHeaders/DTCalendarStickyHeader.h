

#import <UIKit/UIKit.h>

@class DTCalendar,DTCalendarAppearance;

@interface DTCalendarStickyHeader : UICollectionReusableView

@property (weak, nonatomic) DTCalendar *calendar;

@property (weak, nonatomic) UILabel *titleLabel;

@property (strong, nonatomic) NSDate *month;

- (void)configureAppearance;

@end
