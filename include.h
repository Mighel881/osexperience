#define UIApp (SpringBoard*)[UIApplication sharedApplication]
#define DegreesToRadians(x) ((x) * M_PI / 180.0)

#import <QuartzCore/QuartzCore.h>

typedef struct {
	int type;
	unsigned pathIndex;
	CGPoint location;
	CGPoint previousLocation;
	CGFloat totalDistanceTraveled;
	UIInterfaceOrientation interfaceOrientation;
	UIInterfaceOrientation previousInterfaceOrientation;
} SBGestureRecognizerTouchData;

@interface SBHandMotionExtractor

- (void)extractHandMotionForActiveTouches:(SBGestureRecognizerTouchData *)arg1 count:(unsigned int)arg2 centroid:(struct CGPoint)arg3;

@end


@interface BKProcess{

}

- (void)killWithSignal:(int)arg1;
- (BOOL)_suspend;
- (BOOL)performOriginals;//New
- (void)setPerformOriginals:(BOOL)arg1;//New


@end

@interface SBWallpaperView : UIImageView

- (void)setOrientation:(int)arg1 duration:(double)arg2;
- (void)setGradientAlpha:(float)arg1;
- (id)initWithOrientation:(int)arg1 variant:(int)arg2;

@end

@interface UIToolbar (STFUACAdditions)


- (UIView*)_backgroundView;


@end

@interface BKSSystemServices : NSObject

- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4;
- (void)dealloc;
- (id)init;

@end

@interface UIBarButtonItem (STFUACAdditions)

- (UIView*)view;

@end

@interface SpringBoard : UIApplication

- (UIWindow*)statusBarWindow;
- (UIWindow*)keyWindow;

@end


@interface BKApplication : NSObject

-(int)suspendType;
-(void)setSuspendType:(int)arg1;
- (BKProcess*)process;
- (BOOL)performOriginals;//New
- (void)setPerformOriginals:(BOOL)arg1;//New
- (void)_deactivate:(id)arg1;
- (NSString*)bundleIdentifier;
//- (id)initWithBundleIdentifier:(id)arg1 queue:(dispatch_queue_s*)arg2;

@end



@interface SBFakeStatusBarView : UIView

- (void)requestStyle:(int)arg1;

@end


@interface UIEvent(STFUACAdditions)

-(struct __GSEvent*)_gsEvent;

@end


@interface UITouchesEvent : NSObject


- (id)allTouches;
- (struct __GSEvent*)_gsEvent;


@end


@interface UIStatusBar : UIView

+ (int)defaultStatusBarStyleWithTint:(BOOL)arg1;
+ (CGRect)frameForStyle:(int)arg1 orientation:(int)arg2;

@end



@interface SBApplication : NSObject {

}

- (id)displayIdentifier;
- (id)displayValue:(int)arg1;
- (int)contextID;
- (void)setContextID:(int)arg1;
- (id)displayName;
- (id)contextHostViewForRequester:(id)arg1 enableAndOrderFront:(BOOL)arg2;
- (id)bundleIdentifier;
- (void)activate; //New (Added functionality back; Original function simply returns.)
- (BOOL)activationFlag:(unsigned int)arg1;
- (void)addToSlider; //New
- (unsigned int)eventPort;
- (void)rotateToInterfaceOrientation:(int)orientation;//New
- (void)suspend; //new
- (int)statusBarOrientation;
- (BOOL)isRunning;


@end




@interface SBWorkspace : NSObject

-(void)setCurrentTransaction:(id)arg1;

@end





@interface CPDistributedMessagingCenter : NSObject
{

}

+ (id)centerNamed:(id)arg1;

- (void)registerForMessageName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)stopServer;
- (void)runServerOnCurrentThread;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2;
- (BOOL)sendMessageName:(id)arg1 userInfo:(id)arg2;

@end


@interface SBIconController

+ (id)sharedInstance;
- (void)prepareToRotateFolderAndSlidingViewsToOrientation:(int)arg1;
- (id)dock;
- (id)contentView;
- (BOOL)hasOpenFolder;
- (void)_showSearchKeyboardIfNecessary:(BOOL)arg1;
- (BOOL)isShowingSearch;

@end


@interface SBDockIconListView : UIView


@end

@interface SBUIAnimationZoomUpApp

- (void)_noteAnimationDidFinish:(BOOL)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_cleanupAnimation;

@end 

@interface SBApplicationIcon : NSObject


-(void)launch;
-(void)launchFromViewSwitcher;
-(SBApplication*)application;
- (id)initWithApplication:(id)arg1;

@end

@interface SBAppToAppTransitionController


-(SBApplication*)activatingApp;
- (void)_cleanupAnimation;
- (void)_cancelAnimation;
- (void)appTransitionViewAnimationDidStop:(id)arg1;

@end




@interface SBIcon : NSObject


- (BOOL)isFolderIcon;
- (BOOL)isNewsstandIcon;
- (void)launch;
- (id)generateIconImage:(int)arg1;
- (id)getIconImage:(int)arg1;


@end


@interface SBIconView : UIImageView

- (SBIcon*)icon;
- (id)iconImageView;
- (BOOL)isGrabbed;
- (BOOL)isInDock;


@end






@interface SBHostWrapperView : UIView



@end

@interface BKWorkspaceServerManager

-(id)applicationForBundleIdentifier:(NSString*)bundleIdentifier;
-(id)workspaceForApplication:(id)application;
-(id)currentWorkspace;
- (void)_receiveSuspend:(id)arg1;
- (unsigned int)portForBundleIdentifier:(id)arg1;
- (unsigned int)currentEventPort;


@end


@interface BKWorkspaceServer

-(void)activate:(id)arg1 withActivation:(id)arg2 withDeactivation:(id)arg3 token:(id)arg4;
- (BOOL)_activate:(id)arg1 activationSettings:(id)arg2 deactivationSettings:(id)arg3 token:(id)arg4;

- (void)suspend:(id)arg1;

@end

@interface BKSWorkspaceActivationToken

+(id)token;

@end


@interface SBApplicationController{

}

+(id)sharedInstance;

-(id)applicationWithDisplayIdentifier:(NSString*)arg1;

@end

@interface BKSApplicationProcessInfo

-(BOOL)suspended;
-(id)bundleIdentifier;

@end

@interface UIApplication(STFUACAdditions)
-(id)displayIdentifier;


@end



@interface UIWindow(STFUACAdditions)

-(unsigned int)_contextId;

@end



@interface SBUIController : UIView{

}

+ (id)sharedInstance;
+ (id)zoomViewForContextHostView:(id)arg1 application:(id)arg2 includeStatusBar:(BOOL)arg3 includeBanner:(BOOL)arg4;

- (id)wallpaperView;
- (id)rootView;
- (void)activateApplicationAnimated:(id)arg1;
- (id)systemGestureSnapshotWithIOSurfaceSnapshotOfApp:(id)arg1 includeStatusBar:(BOOL)arg2;
- (id)systemGestureSnapshotForApp:(id)arg1 includeStatusBar:(BOOL)arg2 decodeImage:(BOOL)arg3;
- (void)createFakeSpringBoardStatusBar;
- (id)_fakeSpringBoardStatusBar;

@end


@interface SBFluidSlideGestureRecognizer : NSObject

-(float)cumulativePercentage;
-(CGPoint)centroidPoint;


@end
