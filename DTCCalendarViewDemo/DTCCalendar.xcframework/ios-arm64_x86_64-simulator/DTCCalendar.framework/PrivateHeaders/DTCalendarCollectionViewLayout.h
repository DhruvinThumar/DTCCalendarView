

#import <UIKit/UIKit.h>

@class DTCalendar;

@interface DTCalendarCollectionViewLayout : UICollectionViewLayout

@property (weak, nonatomic) DTCalendar *calendar;

@property (assign, nonatomic) UIEdgeInsets sectionInsets;
@property (assign, nonatomic) UICollectionViewScrollDirection scrollDirection;

@end
