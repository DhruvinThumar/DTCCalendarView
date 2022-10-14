

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "DTCalendar.h"
#import "DTCalendarCell.h"
#import "DTCalendarHeaderView.h"
#import "DTCalendarStickyHeader.h"
#import "DTCalendarCollectionView.h"
#import "DTCalendarCollectionViewLayout.h"
#import "DTCalendarCalculator.h"
#import "DTCalendarTransitionCoordinator.h"
#import "DTCalendarDelegationProxy.h"

@interface DTCalendar (Dynamic)

@property (readonly, nonatomic) DTCalendarCollectionView *collectionView;
@property (readonly, nonatomic) DTCalendarCollectionViewLayout *collectionViewLayout;
@property (readonly, nonatomic) DTCalendarTransitionCoordinator *transitionCoordinator;
@property (readonly, nonatomic) DTCalendarCalculator *calculator;
@property (readonly, nonatomic) BOOL floatingMode;
@property (readonly, nonatomic) NSArray *visibleStickyHeaders;
@property (readonly, nonatomic) CGFloat preferredHeaderHeight;
@property (readonly, nonatomic) CGFloat preferredWeekdayHeight;

@property (readonly, nonatomic) NSCalendar *gregorian;
@property (readonly, nonatomic) NSDateFormatter *formatter;

@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *daysContainer;

@property (assign, nonatomic) BOOL needsAdjustingViewFrame;

- (void)adjustMonthPosition;
- (void)configureAppearance;

- (CGSize)sizeThatFits:(CGSize)size scope:(DTCalendarScope)scope;

@end

@interface DTCalendarAppearance (Dynamic)

@property (readwrite, nonatomic) DTCalendar *calendar;

@property (readonly, nonatomic) NSDictionary *backgroundColors;
@property (readonly, nonatomic) NSDictionary *titleColors;
@property (readonly, nonatomic) NSDictionary *subtitleColors;
@property (readonly, nonatomic) NSDictionary *borderColors;

@end

@interface DTCalendarWeekdayView (Dynamic)

@property (readwrite, nonatomic) DTCalendar *calendar;

@end

@interface DTCalendarCollectionViewLayout (Dynamic)

@property (readonly, nonatomic) CGSize estimatedItemSize;

@end

@interface DTCalendarDelegationProxy()<DTCalendarDataSource,DTCalendarDelegate,DTCalendarDelegateAppearance>
@end


