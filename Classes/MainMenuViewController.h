#import "AboutViewController.h"
#import "XMLTable.h"
#import "ClosestLocations.h"
#import "RecentlyAddedViewController.h"
#import "EventsViewController.h"
#import "ZonesViewController.h"
#import "MachineViewController.h"
#import <CoreLocation/CoreLocation.h>

@interface MainMenuViewController : XMLTable <CLLocationManagerDelegate, UIAlertViewDelegate, UIAccelerometerDelegate> {
	NSArray *controllers;
	AboutViewController *aboutView;
	
	CLLocationManager *locationManager;
	CLLocation *startingPoint;

    NSString *motd;
    NSString *activeNode;
    NSNumber *currentID;
    NSNumber *currentZoneID;
	NSMutableString *currentName;
    NSMutableString *currentFormalName;
	NSNumber *currentNumMachines;
	NSNumber *currentLat;
	NSNumber *currentLon;
	NSNumber *currentNumLocations;
	NSMutableString *currentShortName;
    NSMutableString *currentSubdir;
    bool currentIsPrimary;
	
    NSArray *tableTitles;
	
	int	parsingAttempts;
	int initID;
	
	BOOL init2Loaded;
    BOOL xmlStarted;
    
    NSMutableDictionary *zonesForLocations;
}

@property (nonatomic,strong) CLLocation *startingPoint;
@property (nonatomic,strong) CLLocationManager *locationManager;
@property (nonatomic,strong) NSArray *tableTitles;
@property (nonatomic,strong) NSArray *controllers;
@property (nonatomic,strong) AboutViewController *aboutView;

- (void)loadInitXML:(int)withID;
- (void)pressInfo:(id)sender;
- (void)showInfoButton;

@end