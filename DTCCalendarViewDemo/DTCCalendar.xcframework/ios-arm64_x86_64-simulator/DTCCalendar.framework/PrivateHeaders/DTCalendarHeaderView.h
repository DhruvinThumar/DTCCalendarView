

#import <UIKit/UIKit.h>

@class DTCalendar, DTCalendarAppearance, DTCalendarHeaderLayout, DTCalendarCollectionView;

@interface DTCalendarHeaderView : UIView

@property (weak, nonatomic) DTCalendarCollectionView *collectionView;
@property (weak, nonatomic) DTCalendarHeaderLayout *collectionViewLayout;
@property (weak, nonatomic) DTCalendar *calendar;

@property (assign, nonatomic) UICollectionViewScrollDirection scrollDirection;
@property (assign, nonatomic) BOOL scrollEnabled;

- (void)setScrollOffset:(CGFloat)scrollOffset;
- (void)setScrollOffset:(CGFloat)scrollOffset animated:(BOOL)animated;
- (void)reloadData;
- (void)configureAppearance;

@end


@interface DTCalendarHeaderCell : UICollectionViewCell

@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) DTCalendarHeaderView *header;

@end

@interface DTCalendarHeaderLayout : UICollectionViewFlowLayout

@end

@interface DTCalendarHeaderTouchDeliver : UIView

@property (weak, nonatomic) DTCalendar *calendar;
@property (weak, nonatomic) DTCalendarHeaderView *header;

@end
