

#import <UIKit/UIKit.h>

@class DTCalendar, DTCalendarAppearance, DTCalendarEventIndicator;

typedef NS_ENUM(NSUInteger, DTCalendarMonthPosition);

@interface DTCalendarCell : UICollectionViewCell



@property (weak, nonatomic) UILabel  *titleLabel;


@property (weak, nonatomic) UILabel  *subtitleLabel;


@property (weak, nonatomic) CAShapeLayer *shapeLayer;


@property (weak, nonatomic) UIImageView *imageView;


@property (weak, nonatomic) DTCalendarEventIndicator *eventIndicator;


@property (assign, nonatomic, getter=isPlaceholder) BOOL placeholder;

#pragma mark - Private properties

@property (weak, nonatomic) DTCalendar *calendar;
@property (weak, nonatomic) DTCalendarAppearance *appearance;

@property (strong, nonatomic) NSString *subtitle;
@property (strong, nonatomic) UIImage  *image;
@property (assign, nonatomic) DTCalendarMonthPosition monthPosition;

@property (assign, nonatomic) NSInteger numberOfEvents;
@property (assign, nonatomic) BOOL dateIsToday;
@property (assign, nonatomic) BOOL weekend;

@property (strong, nonatomic) UIColor *preferredFillDefaultColor;
@property (strong, nonatomic) UIColor *preferredFillSelectionColor;
@property (strong, nonatomic) UIColor *preferredTitleDefaultColor;
@property (strong, nonatomic) UIColor *preferredTitleSelectionColor;
@property (strong, nonatomic) UIColor *preferredSubtitleDefaultColor;
@property (strong, nonatomic) UIColor *preferredSubtitleSelectionColor;
@property (strong, nonatomic) UIColor *preferredBorderDefaultColor;
@property (strong, nonatomic) UIColor *preferredBorderSelectionColor;
@property (assign, nonatomic) CGPoint preferredTitleOffset;
@property (assign, nonatomic) CGPoint preferredSubtitleOffset;
@property (assign, nonatomic) CGPoint preferredImageOffset;
@property (assign, nonatomic) CGPoint preferredEventOffset;

@property (strong, nonatomic) NSArray<UIColor *> *preferredEventDefaultColors;
@property (strong, nonatomic) NSArray<UIColor *> *preferredEventSelectionColors;
@property (assign, nonatomic) CGFloat preferredBorderRadius;


- (instancetype)initWithFrame:(CGRect)frame NS_REQUIRES_SUPER;
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_REQUIRES_SUPER;


- (void)layoutSubviews NS_REQUIRES_SUPER; // Configure frames of subviews
- (void)configureAppearance NS_REQUIRES_SUPER; // Configure appearance for cell

- (UIColor *)colorForCurrentStateInDictionary:(NSDictionary *)dictionary;
- (void)performSelecting;

@end

@interface DTCalendarEventIndicator : UIView

@property (assign, nonatomic) NSInteger numberOfEvents;
@property (strong, nonatomic) id color;

@end

@interface DTCalendarBlankCell : UICollectionViewCell

- (void)configureAppearance;

@end

