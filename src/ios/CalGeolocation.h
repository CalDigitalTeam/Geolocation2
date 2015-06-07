//
//  Diagnostic.h
//  Plugin diagnostic
//
//  Copyright (c) 2012 AVANTIC ESTUDIO DE INGENIEROS
//

#import <Cordova/CDV.h>

@interface CalGeolocation : CDVPlugin

- (void) isLocationEnabled: (CDVInvokedUrlCommand*)command;
- (void) isLocationEnabledSetting: (CDVInvokedUrlCommand*)command;
- (void) switchToLocationSettings: (CDVInvokedUrlCommand*)command;

@end
