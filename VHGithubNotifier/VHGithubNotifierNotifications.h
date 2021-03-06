//
//  VHGithubNotifierNotifications.h
//  VHGithubNotifier
//
//  Created by viktorhuang on 2016/12/25.
//  Copyright © 2016年 黄伟平. All rights reserved.
//

#ifndef VHGithubNotifierNotifications_h
#define VHGithubNotifierNotifications_h

// When  : When the profile of user is loaded.
// Who   : VHGithubNotifierManager
// To    : VHGithubNotifierManager
// Params:
static NSString * const kNotifyProfileLoadedSuccessfully = @"kNotifyProfileLoadedSuccessfully";

// When  : When the repositories of user is loaded.
// Who   : VHGithubNotifierManager
// To    : AppDelegate
// Params:
static NSString * const kNotifyRepositoriesLoadedSuccessfully = @"kNotifyRepositoriesLoadedSuccessfully";

// When  : When the github-content-types are changed.
// Who   : VHGithubNotifierManager/Settings
// To    : VCs
// Params:
static NSString * const kNotifyGithubContentsChanged = @"kNotifyGithubContentsChanged";

// When  : When the window is going to show.
// Who   : AppDelegate
// To    : VCs
// Params:
static NSString * const kNotifyWindowWillAppear = @"kNotifyWindowWillAppear";

#endif /* VHGithubNotifierNotifications_h */

// When  : When the languages are loaded successfully from github.
// Who   : VHGithubNotifierManager
// To    : VCs
// Params:
static NSString * const kNotifyLanguageLoadedSuccessfully = @"kNotifyLanguageLoadedSuccessfully";

// When  : When the languages are loaded failed from github.
// Who   : VHGithubNotifierManager
// To    : VCs
// Params:
static NSString * const kNotifyLanguageLoadedFailed = @"kNotifyLanguageLoadedFailed";

// When  : When the one trending content is loaded successfully from github.
// Who   : VHGithubNotifierManager
// To    : VCs
// Params:
static NSString * const kNotifyTrendingLoadedSuccessfully = @"kNotifyTrendingLoadedSuccessfully";

// When  : When the one trending content is loaded failed from github.
// Who   : VHGithubNotifierManager
// To    : VCs
// Params:
static NSString * const kNotifyTrendingLoadedFailed = @"kNotifyTrendingLoadedFailed";

// When  : When the window should be hide.
// Who   :
// To    : AppDelegate
// Params:
static NSString * const kNotifyWindowShouldHide = @"kNotifyWindowShouldHide";

// When  : In the process of user account confirming, successfully
// Who   : Manager
// To    : AccountWC
// Params:
static NSString * const kNotifyUserAccountConfirmSuccessfully = @"kNotifyUserAccountConfirmSuccessfully";

// When  : In the process of user account confirming, internet failed
// Who   : Manager
// To    : AccountWC
// Params:
static NSString * const kNotifyUserAccountConfirmInternetFailed = @"kNotifyUserAccountConfirmInternetFailed";

// When  : In the process of user account confirming, incorrect username or password
// Who   : Manager
// To    : AccountWC
// Params:
static NSString * const kNotifyUserAccountConfirmIncorrectUsernameOrPassword = @"kNotifyUserAccountConfirmIncorrectUsernameOrPassword";

// When  : In the process of user account confirming, incorrect token
// Who   : Manager
// To    : AccountWC
// Params:
static NSString * const kNotifyUserAccountConfirmIncorrectToken = @"kNotifyUserAccountConfirmIncorrectToken";

// When  : When notifications are updated successfully from github.
// Who   : Manager
// To    :
// Params:
static NSString * const kNotifyNotificationsLoadedSuccessfully = @"kNotifyNotificationsLoadedSuccessfully";

// When  : When notifications are updated failed from github.
// Who   : Manager
// To    :
// Params:
static NSString * const kNotifyNotificationsLoadedFailed = @"kNotifyNotificationsLoadedFailed";

// When  : When the window is going to show
// Who   : AppDelegate
// To    :
// Params:
static NSString * const kNotifyWindowWillShow = @"kNotifyWindowWillShow";

// When  : When the window is going to hide
// Who   : AppDelegate
// To    :
// Params:
static NSString * const kNotifyWindowWillHide = @"kNotifyWindowWillHide";

// When  : When notifications are updated(read/subscribe).
// Who   : Manager
// To    :
// Params:
static NSString * const kNotifyNotificationsChanged = @"kNotifyNotificationsChanged";

// When  : When contents in status button are changed.
// Who   : Manager + UserDefaults
// To    :
// Params:
static NSString * const kNotifyStatusBarButtonContentChanged = @"kNotifyStatusBarButtonContentChanged";

// When  : When login cookie is got successfully
// Who   : Manager + Profile
// To    :
// Params:
static NSString * const kNotifyLoginCookieGotSuccessfully = @"kNotifyLoginCookieGotSuccessfully";

// When  : When login cookie is got successfully
// Who   : Manager + Profile
// To    :
// Params:
static NSString * const kNotifyLoginCookieGotFailed = @"kNotifyLoginCookieGotFailed";

// When  : When contribution blocks are loaded successfully
// Who   : Manager + Profile
// To    :
// Params:
static NSString * const kNotifyContributionBlocksLoadedSuccessfully = @"kNotifyContributionBlocksLoadedSuccessfully";

// When  : When contribution blocks are loaded failed
// Who   : Manager + Profile
// To    :
// Params:
static NSString * const kNotifyContributionBlocksLoadedFailed = @"kNotifyContributionBlocksLoadedFailed";

// When  : When the week-starts-from settings changed
// Who   : Settings VC
// To    :
// Params:
static NSString * const kNotifyWeekStartsFromChanged = @"kNotifyWeekStartsFromChanged";

// When  : When the contribution chart is updated locally(when the week-stars-from changed)
// Who   : Manager + Profile
// To    :
// Params:
static NSString * const kNotifyContributionChartChanged = @"kNotifyContributionChartChanged";

// When  : When the current tab of tab view controller is changed
// Who   : VHTabVC
// To    :
// Params:
static NSString * const kNotifyTabInTabViewControllerChanged = @"kNotifyTabInTabViewControllerChanged";

// When  : When the minimum star number in repositories-pie changed
// Who   : Settings VC
// To    :
// Params:
static NSString * const kNotifyMinimumStarNumberInPieChanged = @"kNotifyMinimumStarNumberInPieChanged";
