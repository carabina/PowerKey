//
//  PKPreferencesController.h
//  PowerKey
//
//  Created by Peter Kamb on 8/16/13.
//  Copyright (c) 2013 Peter Kamb. All rights reserved.
//

#import <Cocoa/Cocoa.h>

const NSInteger kPowerKeyDeadKeyTag;
const NSInteger kPowerKeyScriptTag;

@interface PKPreferencesController : NSWindowController<NSOpenSavePanelDelegate>

@property (nonatomic, retain) IBOutlet NSPopUpButton *powerKeySelector;

- (IBAction)didSelectPowerKeyReplacement:(id)sender;

- (NSMenuItem *)powerKeyReplacementMenuItemWithTitle:(NSString *)title keyCode:(CGKeyCode)keyCode keyEquivalentChar:(unichar)keyEquivalentChar;
- (NSMenuItem *)powerKeyReplacementMenuItemWithTitle:(NSString *)title keyCode:(CGKeyCode)keyCode keyEquivalent:(NSString *)keyEquivalent;
- (NSMenu *)powerKeyReplacementsMenu;

- (IBAction)openProjectOnGithub:(id)sender;
- (IBAction)openMavericksFixExplanation:(id)sender;

- (NSURL *)applicationSupportDirectory;
- (void)copyBundleResourceToSupportDirectory:(NSString *)resource withExtension:(NSString *)extension;

@end
