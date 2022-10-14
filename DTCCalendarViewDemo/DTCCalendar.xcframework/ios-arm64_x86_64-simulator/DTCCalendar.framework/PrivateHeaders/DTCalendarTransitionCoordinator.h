

#import "DTCalendar.h"
#import "DTCalendarCollectionView.h"
#import "DTCalendarCollectionViewLayout.h"

typedef NS_ENUM(NSUInteger, DTCalendarTransitionState) {
    DTCalendarTransitionStateIdle,
    DTCalendarTransitionStateChanging,
    DTCalendarTransitionStateFinishing,
};

@interface DTCalendarTransitionCoordinator : NSObject <UIGestureRecognizerDelegate>

@property (assign, nonatomic) DTCalendarTransitionState state;

@property (assign, nonatomic) CGSize cachedMonthSize;

@property (readonly, nonatomic) DTCalendarScope representingScope;

- (instancetype)initWithCalendar:(DTCalendar *)calendar;

- (void)performScopeTransitionFromScope:(DTCalendarScope)fromScope toScope:(DTCalendarScope)toScope animated:(BOOL)animated;
- (void)performBoundingRectTransitionFromMonth:(NSDate *)fromMonth toMonth:(NSDate *)toMonth duration:(CGFloat)duration;
- (CGRect)boundingRectForScope:(DTCalendarScope)scope page:(NSDate *)page;

- (void)handleScopeGesture:(id)sender;

@end


@interface DTCalendarTransitionAttributes : NSObject

@property (assign, nonatomic) CGRect sourceBounds;
@property (assign, nonatomic) CGRect targetBounds;
@property (strong, nonatomic) NSDate *sourcePage;
@property (strong, nonatomic) NSDate *targetPage;
@property (assign, nonatomic) NSInteger focusedRow;
@property (strong, nonatomic) NSDate *focusedDate;
@property (assign, nonatomic) DTCalendarScope targetScope;

- (void)revert;
    
@end

