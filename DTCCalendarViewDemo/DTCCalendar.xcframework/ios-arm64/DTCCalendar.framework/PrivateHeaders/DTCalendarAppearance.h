

#import "DTCalendarConstants.h"

@class DTCalendar;

typedef NS_ENUM(NSInteger, DTCalendarCellState) {
    DTCalendarCellStateNormal      = 0,
    DTCalendarCellStateSelected    = 1,
    DTCalendarCellStatePlaceholder = 1 << 1,
    DTCalendarCellStateDisabled    = 1 << 2,
    DTCalendarCellStateToday       = 1 << 3,
    DTCalendarCellStateWeekend     = 1 << 4,
    DTCalendarCellStateTodaySelected = DTCalendarCellStateToday|DTCalendarCellStateSelected
};

typedef NS_ENUM(NSUInteger, DTCalendarSeparators) {
    DTCalendarSeparatorNone          = 0,
    DTCalendarSeparatorInterRows     = 1
};

typedef NS_OPTIONS(NSUInteger, DTCalendarCaseOptions) {
    DTCalendarCaseOptionsHeaderUsesDefaultCase      = 0,
    DTCalendarCaseOptionsHeaderUsesUpperCase        = 1 << 0,
    DTCalendarCaseOptionsHeaderUsesCapitalized      = 1 << 1,
    
    DTCalendarCaseOptionsWeekdayUsesDefaultCase     = 0 << 4,
    DTCalendarCaseOptionsWeekdayUsesUpperCase       = 1 << 4,
    DTCalendarCaseOptionsWeekdayUsesSingleUpperCase = 2 << 4,
};

/**
 * DTCalendarAppearance determines the fonts and colors of components in the calendar.
 *
 * @see DTCalendarDelegateAppearance
 */
@interface DTCalendarAppearance : NSObject

/**
 * The font of the day text.
 */
@property (strong, nonatomic) UIFont   *titleFont;

/**
 * The font of the subtitle text.
 */
@property (strong, nonatomic) UIFont   *subtitleFont;

/**
 * The font of the weekday text.
 */
@property (strong, nonatomic) UIFont   *weekdayFont;

/**
 * The font of the month text.
 */
@property (strong, nonatomic) UIFont   *headerTitleFont;

/**
 * The offset of the month header from default position.
 */
@property (assign, nonatomic) CGPoint  headerTitleOffset;

/**
 * The offset of the day text from default position.
 */
@property (assign, nonatomic) CGPoint  titleOffset;

/**
 * The offset of the day text from default position.
 */
@property (assign, nonatomic) CGPoint  subtitleOffset;

/**
 * The offset of the event dots from default position.
 */
@property (assign, nonatomic) CGPoint eventOffset;

/**
 * The offset of the image from default position.
 */
@property (assign, nonatomic) CGPoint imageOffset;

/**
 * The color of event dots.
 */
@property (strong, nonatomic) UIColor  *eventDefaultColor;

/**
 * The color of event dots.
 */
@property (strong, nonatomic) UIColor  *eventSelectionColor;

/**
 * The color of weekday text.
 */
@property (strong, nonatomic) UIColor  *weekdayTextColor;

/**
 * The color of month header text.
 */
@property (strong, nonatomic) UIColor  *headerTitleColor;

/**
 * The color oh month header separator
 */
@property (strong, nonatomic) UIColor  *headerSeparatorColor;

/**
 * The date format of the month header.
 */
@property (strong, nonatomic) NSString *headerDateFormat;

/**
 * The text alignment of the month header.
 */
@property (assign, nonatomic) NSTextAlignment headerTitleAlignment;

/**
 * The alpha value of month label staying on the fringes.
 */
@property (assign, nonatomic) CGFloat  headerMinimumDissolvedAlpha;

/**
 * The day text color for unselected state.
 */
@property (strong, nonatomic) UIColor  *titleDefaultColor;

/**
 * The day text color for selected state.
 */
@property (strong, nonatomic) UIColor  *titleSelectionColor;

/**
 * The day text color for today in the calendar.
 */
@property (strong, nonatomic) UIColor  *titleTodayColor;

/**
 * The day text color for days out of current month.
 */
@property (strong, nonatomic) UIColor  *titlePlaceholderColor;

/**
 * The day text color for weekend.
 */
@property (strong, nonatomic) UIColor  *titleWeekendColor;

/**
 * The subtitle text color for unselected state.
 */
@property (strong, nonatomic) UIColor  *subtitleDefaultColor;

/**
 * The subtitle text color for selected state.
 */
@property (strong, nonatomic) UIColor  *subtitleSelectionColor;

/**
 * The subtitle text color for today in the calendar.
 */
@property (strong, nonatomic) UIColor  *subtitleTodayColor;

/**
 * The subtitle text color for days out of current month.
 */
@property (strong, nonatomic) UIColor  *subtitlePlaceholderColor;

/**
 * The subtitle text color for weekend.
 */
@property (strong, nonatomic) UIColor  *subtitleWeekendColor;

/**
 * The fill color of the shape for selected state.
 */
@property (strong, nonatomic) UIColor  *selectionColor;

/**
 * The fill color of the shape for today.
 */
@property (strong, nonatomic) UIColor  *todayColor;

/**
 * The fill color of the shape for today and selected state.
 */
@property (strong, nonatomic) UIColor  *todaySelectionColor;

/**
 * The border color of the shape for unselected state.
 */
@property (strong, nonatomic) UIColor  *borderDefaultColor;

/**
 * The border color of the shape for selected state.
 */
@property (strong, nonatomic) UIColor  *borderSelectionColor;

/**
 * The border radius, while 1 means a circle, 0 means a rectangle, and the middle value will give it a corner radius.
 */
@property (assign, nonatomic) CGFloat borderRadius;

/**
 * The case options manage the case of month label and weekday symbols.
 *
 * @see DTCalendarCaseOptions
 */
@property (assign, nonatomic) DTCalendarCaseOptions caseOptions;

/**
 * The line integrations for calendar.
 *
 */
@property (assign, nonatomic) DTCalendarSeparators separators;

#if TARGET_INTERFACE_BUILDER

// For preview only
@property (assign, nonatomic) BOOL      fakeSubtitles;
@property (assign, nonatomic) BOOL      fakeEventDots;
@property (assign, nonatomic) NSInteger fakedSelectedDay;

#endif

@end



